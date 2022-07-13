#include <stdio.h>
#include <string.h>
//#include "PcAPIL.h"

#define BUFFER 200
#define SIZE 3

typedef struct enc_info{
  int num; 
  char *keyname;
  int keyId; 
  unsigned char test_enc[BUFFER]; // test 구문에 대한 올바른 암호화 값 %s로 print
} encInfo;


int main(){

  encInfo encinfo[SIZE] ={{0,"AES128",100,"Q8LLj5fMkoBtEsIoxRwZSIN/EqSSEOQQAD/g4GXjnwE="},
			  {1,"AES192",110,"Q8LLj5fMkoBtEsIoxRwZSIN/EqSSEOQQAD/g4GXjnwE="},
                          {2,"AES256",120,"Q8LLj5fMkoBtEsIoxRwZSIN/EqSSEOQQAD/g4GXjnwE="}};

  int i, n;
  

  //알고리즘 선택  

  printf("\nusable testing algorithm .... \n\n");
  printf("num   keyname \n");
  printf("---   ------- \n");
  for( i=0; i<SIZE;i++){
    printf(" %d    %s \n",encinfo[i].num, encinfo[i].keyname);
  }
  printf("\n");
  

  printf("\nchoose testing algorithm ....  ");
  scanf("%d",&n);



  
//검증할 알고리즘 선택 100/200/300 ...
//keyId에 해당하는 key name 가져와서 print
//test_txt[buffer]="testing petra cipher .."
//func1 : 암복호화 수행 테스트 : 단순하게 암복호화 실행 후 에러코드에 대한 예외처리 //err code 이중배열  만들어서 호출 단방향은 그냥 에러 뜨게 ..
//func2 : lib 유효성 : 정상 값  배열에 순서대로 넣고 비교/ 복호화 값은 원본텍스트 활용 배열x / 다른 키 들어가면 에외처리 
//func3 : 키 값 검증 : 다른 알고리즘 넣었을 때 비교 


}



