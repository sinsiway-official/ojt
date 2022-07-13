#include <stdio.h>
#include <string.h>
#include "PcAPIL.h"

#define BUFFER 200


int main(int argc, char **argv){
    int rtn = 0;
    int keyId = 100;
    const char *keyName = "AES128";

    if ((rtn = PcAPI_initialize((char *)"./petra_cipher_api.conf", (char *)"")) < 0)
    {
        printf("PcAPI_initialize failed[%d]", rtn);
    }

    int sid = 0;
    if ((sid = PcAPI_getSession("")) < 0)
    {
        printf("getApiSession failed[%d]", sid);
    }

    char plainText[BUFFER];
    unsigned char encryptText[BUFFER];
    unsigned char decryptText[BUFFER];
    memset(plainText, 0, BUFFER);
    memset(encryptText, 0, BUFFER);
    memset(decryptText, 0, BUFFER);
    unsigned int encryptLength = BUFFER;
    unsigned int decryptLength = BUFFER;

    strcat(plainText, "Believe in yourself.");
    if ((rtn = PcAPI_encrypt(sid, keyId, (unsigned char *)plainText, strlen(plainText), encryptText, &encryptLength)) < 0)
    {
        printf("encrypt error occured rtn[%d]\n", rtn);
        return -1;
    }
    if ((rtn = PcAPI_decrypt(sid, keyId, encryptText, encryptLength, decryptText, &decryptLength)) < 0)
    {
        printf("decrypt error occured rtn[%d]\n", rtn);
        return -1;
    }

    decryptText[decryptLength] = 0;


    printf("|| CASE 01 : Use Column Id\n");
    printf("|| ex) int PcAPI_encrypt(int api_sid, long long enc_col_id, unsigned char* src, int src_len, unsigned char* dst, unsigned int* dst_len)\n");
    printf("||\n|| [ %s ]\n||\n", plainText);
    printf("|| Encrypt String : %s\n", encryptText);
    printf("|| Decrypt String : %s\n", decryptText);

    memset(plainText, 0, BUFFER);
    memset(encryptText, 0, BUFFER);
    memset(decryptText, 0, BUFFER);
    encryptLength = BUFFER;
    decryptLength = BUFFER;
    strcat(plainText, "Follow your heart.");

    if ((rtn = PcAPI_encrypt_name(sid, keyName, (unsigned char *)plainText, strlen(plainText), encryptText, &encryptLength)) < 0)
    {
        printf("encrypt error occured rtn[%d]\n", rtn);
        return -1;
    }
    if ((rtn = PcAPI_decrypt_name(sid, keyName, encryptText, encryptLength, decryptText, &decryptLength)) < 0)
    {
        printf("decrypt error occured rtn[%d]\n", rtn);
        return -1;
    }

    decryptText[decryptLength] = 0;

    printf("\n|| CASE 02 : Use Column Name\n");
    printf("|| ex) int PcAPI_encrypt_name(int api_sid, const char* enc_col_name, unsigned char* src, src_len, unsigned char* dst, unsigned int* dst_len)\n");
    printf("||\n|| [ %s ]\n||\n", plainText);
    printf("|| Encrypt String : %s\n", encryptText);
    printf("|| Decrypt String : %s\n", decryptText);

    return 0;


}

