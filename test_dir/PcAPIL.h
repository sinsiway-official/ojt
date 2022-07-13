/*******************************************************************
 *   File Type          :       interface declaration
 *   Classes            :       PcAPIL
 *   Implementor        :       mwpark
 *   Create Date        :       2015. 10. 20 
 *   Description        :       petra cipher API Logging
 *   Modification history
 *   date                    modification
--------------------------------------------------------------------

********************************************************************/
#ifndef PC_APIL_H
#define PC_APIL_H

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_initialize(char* info_file_path,char* credentials_pw);
#else
int PcAPI_initialize(char* info_file_path,char* credentials_pw);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_getSession(
        const char*     client_ip);
#else
int PcAPI_getSession(
        const char*     client_ip);
#endif



#ifdef WIN32
void __declspec(dllexport) PcAPI_returnSession(int api_sid);
#else
void PcAPI_returnSession(int api_sid);
#endif

#ifdef WIN32
void __declspec(dllexport) PcAPI_removeSession(
	const char*	client_ip);
#else
void PcAPI_removeSession(
	const char*	client_ip);
#endif

#ifdef WIN32
void __declspec(dllexport) PcAPI_removeSession2(
		const char*	client_ip,
		const char* client_program,
		const char* os_user);
#else
void PcAPI_removeSession2(
		const char*	client_ip,
		const char* client_program,
		const char* os_user);
#endif

#ifdef WIN32
void __declspec(dllexport) PcAPI_setCharSet(int api_sid, const char* char_set);
#else
void PcAPI_setCharSet(int api_sid, const char* char_set);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_inBuffer(int api_sid, unsigned char** in_buf, int len);
#else
int PcAPI_inBuffer(int api_sid, unsigned char** in_buf, int len);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_encrypt(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len);

#else
int PcAPI_encrypt(
	int		api_sid,
	long long	enc_col_id,
	unsigned char*	src,
	int		src_len,
	unsigned char*	dst,
	unsigned int*	dst_len);
#endif


#ifdef WIN32
int __declspec(dllexport) PcAPI_encrypt_l(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len,
        int             sql_type);


#else
int PcAPI_encrypt_l(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len,
        int             sql_type);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_encrypt_sess_buf(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  src,
        int             src_len,
        unsigned char** dst,
        unsigned int*   dst_len);

#else
int PcAPI_encrypt_sess_buf(
	int		api_sid,
	long long	enc_col_id,
	unsigned char*	src,
	int		src_len,
	unsigned char**	dst,
	unsigned int*	dst_len);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_encrypt_sess_buf_l(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  src,
        int             src_len,
        unsigned char** dst,
        unsigned int*   dst_len,
        int             sql_type);

#else
int PcAPI_encrypt_sess_buf_l(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  src,
        int             src_len,
        unsigned char** dst,
        unsigned int*   dst_len,
        int             sql_type);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_encrypt_name(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len);
#else
int PcAPI_encrypt_name(
	int		api_sid,
	const char*	enc_col_name,
	unsigned char*	src,
	int		src_len,
	unsigned char*	dst,
	unsigned int*	dst_len);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_encrypt_name_l(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len,
        int             sql_type);
#else
int PcAPI_encrypt_name_l(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len,
        int             sql_type);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_encrypt_name_sess_buf(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char** dst,
        unsigned int*   dst_len);
#else
int PcAPI_encrypt_name_sess_buf(
	int		api_sid,
	const char*	enc_col_name,
	unsigned char*	src,
	int		src_len,
	unsigned char**	dst,
	unsigned int*	dst_len);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_encrypt_name_sess_buf_l(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char** dst,
        unsigned int*   dst_len,
        int             sql_type);
#else
int PcAPI_encrypt_name_sess_buf_l(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char** dst,
        unsigned int*   dst_len,
        int             sql_type);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_decrypt(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len);
#else
int PcAPI_decrypt(
	int		api_sid,
	long long	enc_col_id,
	unsigned char*	src,
	int		src_len,
	unsigned char*	dst,
	unsigned int*	dst_len);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_decrypt_l(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len,
        int             sql_type);
#else
int PcAPI_decrypt_l(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len,
        int             sql_type);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_decrypt_sess_buf(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  src,
        int             src_len,
        unsigned char** dst,
        unsigned int*   dst_len);
#else
int PcAPI_decrypt_sess_buf(
	int		api_sid,
	long long	enc_col_id,
	unsigned char*	src,
	int		src_len,
	unsigned char**	dst,
	unsigned int*	dst_len);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_decrypt_sess_buf_l(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  src,
        int             src_len,
        unsigned char** dst,
        unsigned int*   dst_len,
        int             sql_type);
#else
int PcAPI_decrypt_sess_buf_l(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  src,
        int             src_len,
        unsigned char** dst,
        unsigned int*   dst_len,
        int             sql_type);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_decrypt_name(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len);
#else
int PcAPI_decrypt_name(
	int		api_sid,
	const char*	enc_col_name,
	unsigned char*	src,
	int		src_len,
	unsigned char*	dst,
	unsigned int*	dst_len);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_decrypt_name_l(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len,
        int             sql_type);
#else
int PcAPI_decrypt_name_l(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len,
        int             sql_type);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_decrypt_name_sess_buf(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char** dst,
        unsigned int*   dst_len);
#else
int PcAPI_decrypt_name_sess_buf(
	int		api_sid,
	const char* 	enc_col_name,
	unsigned char*	src,
	int		src_len,
	unsigned char**	dst,
	unsigned int*	dst_len);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_decrypt_name_sess_buf_l(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char** dst,
        unsigned int*   dst_len,
        int             sql_type);
#else
int PcAPI_decrypt_name_sess_buf_l(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char** dst,
        unsigned int*   dst_len,
        int             sql_type);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_decrypt_vkey_id(
        int             api_sid,
		long long       virtual_key_id,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len,
		const unsigned int target_type,
		const char* name1,
		const char* name2,
		const char* name3,
		const char* name4,
		const char* name5,
		const char* name6,
		const char* name7,
		const char* name8,
		const char* name9,
		const char* name10);
#else
int PcAPI_decrypt_vkey_id(
	int		api_sid,
	long long       virtual_key_id,
	unsigned char*	src,
	int		src_len,
	unsigned char*	dst,
	unsigned int*	dst_len,
	const unsigned int target_type,
	const char* name1,
	const char* name2,
	const char* name3,
	const char* name4,
	const char* name5,
	const char* name6,
	const char* name7,
	const char* name8,
	const char* name9,
	const char* name10);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_decrypt_vkey_id_sess_buf(
        int             api_sid,
		long long       virtual_key_id,
        unsigned char*  src,
        int             src_len,
        unsigned char**  dst,
        unsigned int*   dst_len,
		const unsigned int target_type,
		const char* name1,
		const char* name2,
		const char* name3,
		const char* name4,
		const char* name5,
		const char* name6,
		const char* name7,
		const char* name8,
		const char* name9,
		const char* name10);
#else
int PcAPI_decrypt_vkey_id_sess_buf(
	int		api_sid,
	long long       virtual_key_id,
	unsigned char*	src,
	int		src_len,
	unsigned char**	dst,
	unsigned int*	dst_len,
	const unsigned int target_type,
	const char* name1,
	const char* name2,
	const char* name3,
	const char* name4,
	const char* name5,
	const char* name6,
	const char* name7,
	const char* name8,
	const char* name9,
	const char* name10);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_OPHUEK(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len,
        int             src_enc_flag);
#else
int PcAPI_OPHUEK(
	int		api_sid,
	long long	enc_col_id,
	unsigned char*	src,
	int		src_len,
	unsigned char*	dst,
	unsigned int*	dst_len,
	int		src_enc_flag);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_OPHUEK_sess_buf(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  src,
        int             src_len,
        unsigned char** dst,
        unsigned int*   dst_len,
        int             src_enc_flag);
#else
int PcAPI_OPHUEK_sess_buf(
	int		api_sid,
	long long	enc_col_id,
	unsigned char*	src,
	int		src_len,
	unsigned char**	dst,
	unsigned int*	dst_len,
	int		src_enc_flag);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_OPHUEK_name(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len,
        int             src_enc_flag);
#else
int PcAPI_OPHUEK_name(
	int		api_sid,
	const char*	enc_col_name,
	unsigned char*	src,
	int		src_len,
	unsigned char*	dst,
	unsigned int*	dst_len,
	int		src_enc_flag);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_OPHUEK_name_sess_buf(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char** dst,
        unsigned int*   dst_len,
        int             src_enc_flag);
#else
int PcAPI_OPHUEK_name_sess_buf(
	int		api_sid,
	const char*	enc_col_name,
	unsigned char*	src,
	int		src_len,
	unsigned char**	dst,
	unsigned int*	dst_len,
	int		src_enc_flag);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_encryptCpn(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  src,
        int             src_len,
        unsigned char*  coupon_data,
        unsigned int*   coupon_data_len);
#else
int PcAPI_encryptCpn(
	int		api_sid,
	long long	enc_col_id,
	unsigned char*	src,
	int		src_len,
	unsigned char*	coupon_data,
	unsigned int*	coupon_data_len);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_encryptCpn_sess_buf(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  src,
        int             src_len,
        unsigned char** coupon_data,
        unsigned int*   coupon_data_len);
#else
int PcAPI_encryptCpn_sess_buf(
	int		api_sid,
	long long	enc_col_id,
	unsigned char*	src,
	int		src_len,
	unsigned char**	coupon_data,
	unsigned int*	coupon_data_len);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_encryptCpn_name(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char*  coupon_data,
        unsigned int*   coupon_data_len);
#else
int PcAPI_encryptCpn_name(
	int		api_sid,
	const char*	enc_col_name,
	unsigned char*	src,
	int		src_len,
	unsigned char*	coupon_data,
	unsigned int*	coupon_data_len);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_encryptCpn_name_sess_buf(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char** coupon_data,
        unsigned int*   coupon_data_len);
#else
int PcAPI_encryptCpn_name_sess_buf(
	int		api_sid,
	const char*	enc_col_name,
	unsigned char*	src,
	int		src_len,
	unsigned char**	coupon_data,
	unsigned int*	coupon_data_len);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_decryptCpn(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  coupon,
        int             coupon_len,
        unsigned char*  dst,
        unsigned int*   dst_len);
#else
int PcAPI_decryptCpn(
	int		api_sid,
	long long	enc_col_id,
	unsigned char*	coupon,
	int		coupon_len,
	unsigned char*	dst,
	unsigned int*	dst_len);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_decryptCpn_sess_buf(
        int             api_sid,
        long long       enc_col_id,
        unsigned char*  coupon,
        int             coupon_len,
        unsigned char** dst,
        unsigned int*   dst_len);
#else
int PcAPI_decryptCpn_sess_buf(
	int		api_sid,
	long long	enc_col_id,
	unsigned char*	coupon,
	int		coupon_len,
	unsigned char**	dst,
	unsigned int*	dst_len);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_decryptCpn_name(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  coupon,
        int             coupon_len,
        unsigned char*  dst,
        unsigned int*   dst_len);
#else
int PcAPI_decryptCpn_name(
	int		api_sid,
	const char*	enc_col_name,
	unsigned char*	coupon,
	int		coupon_len,
	unsigned char*	dst,
	unsigned int*	dst_len);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_decryptCpn_name_sess_buf(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  coupon,
        int             coupon_len,
        unsigned char** dst,
        unsigned int*   dst_len);
#else
int PcAPI_decryptCpn_name_sess_buf(
	int		api_sid,
	const char*	enc_col_name,
	unsigned char*	coupon,
	int		coupon_len,
	unsigned char**	dst,
	unsigned int*	dst_len);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_setSqlHash(int api_sid,char* sql_hash,int sql_type);
#else
int PcAPI_setSqlHash(int api_sid,char* sql_hash,int sql_type);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_logCurrRequest(int api_sid,int sql_type,char* api_program,char* api_userid);
#else
int PcAPI_logCurrRequest(int api_sid,int sql_type,char* api_program,char* api_userid);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_getErrCode(int api_sid);
#else
int PcAPI_getErrCode(int api_sid);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_getNewSqlFlag(int api_sid);
#else
int PcAPI_getNewSqlFlag(int api_sid);
#endif

#ifdef WIN32
void __declspec(dllexport) PcAPI_logging(int err_code,const char* log_msg);
#else
void PcAPI_logging(int err_code,const char* log_msg);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_cryptSamFile(int     api_sid, char*   conf_file_path, char* in_file_path, char* out_file_dir, char* out_file_name);
#else
int PcAPI_cryptSamFile(int     api_sid, char*   conf_file_path, char* in_file_path, char* out_file_dir, char* out_file_name);
#endif


#ifdef WIN32
int __declspec(dllexport)  PcAPI_getKey(
	int             api_sid,
        const char*     enc_col_name,
        unsigned char*  key_buffer,
        int*   key_len);
#else
int PcAPI_getKey(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  key_buffer,
        int*   key_len);

#endif

#ifdef WIN32
__declspec(dllexport) char* PcAPI_enc_name(
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len);
#else
char* PcAPI_enc_name(
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len);
#endif

#ifdef WIN32
__declspec(dllexport) char* PcAPI_enc_name_l(
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        int             sql_type);
#else
char* PcAPI_enc_name_l(
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        int             sql_type);
#endif

#ifdef WIN32
__declspec(dllexport) char* PcAPI_dec_name(
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len);
#else
char* PcAPI_dec_name(
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len);
#endif

#ifdef WIN32
__declspec(dllexport) char* PcAPI_dec_name_l(
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        int             sql_type);
#else
char* PcAPI_dec_name_l(
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        int             sql_type);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_logRequest(int sql_type,char* api_program,char* api_userid);
#else
int PcAPI_logRequest(int sql_type,char* api_program,char* api_userid);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_getError();
#else
int PcAPI_getError();
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_putExtKey(const char* key_name,const char* key, unsigned short foramt_no);
#else
int PcAPI_putExtKey(const char* key_name,const char* key, unsigned short foramt_no);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_enc_name_set_l(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len,
        int             sql_type);
#else
int PcAPI_enc_name_set_l(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len,
        int             sql_type,
	unsigned char*  set_key,
	unsigned char*  set_iv);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_dec_name_set_l(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len,
        int             sql_type);
#else
int PcAPI_dec_name_set_l(
        int             api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len,
        int             sql_type,
        unsigned char*  set_key,
        unsigned char*  set_iv);
#endif


#ifdef WIN32
int __declspec(dllexport) PcAPI_getSession2(
        const char*     client_ip,
        const char*     client_program,
        const char*     os_user);
#else
int PcAPI_getSession2(
        const char*     client_ip,
        const char*     client_program,
        const char*     os_user);
#endif

//
// for unformal file crypt
//

#ifdef WIN32
int __declspec(dllexport) PcAPI_cryptFile(int api_sid,const char* parameters,const char* in_file_path,const char* out_file_path);
int __declspec(dllexport) PcAPI_cryptFile2(int api_sid, const char* program_id,const char* mode, const char* parameters, const char* in_file_path,const char* out_file_path);
#else
int PcAPI_cryptFile(int api_sid,const char* parameters,const char* in_file_path,const char* out_file_path);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_isEncrypted(const char* file_name);
#else
int PcAPI_isEncrypted(const char* file_name);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_getHeaderSize(const char* file_name);
#else
int PcAPI_getHeaderSize(const char* file_name);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_getDecBufSize(const char* key_name, const char* file_name);
#else
int PcAPI_getDecBufSize(const char* key_name, const char* file_name);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_getOrgSize(const char* file_name);
#else
int PcAPI_getOrgSize(const char* file_name);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_regEncrypt(int api_sid, char* src, int src_len, char* dst, unsigned int* dst_len, const char* key_name, const char* regexpr);
#else
int PcAPI_regEncrypt(int api_sid, char* src, int src_len, char* dst, unsigned int* dst_len, const char* key_name, const char* reg_name);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_regDecrypt(int api_sid, char* src, int src_len, char* dst, unsigned int* dst_len, const char* key_name);
#else
int PcAPI_regDecrypt(int api_sid, char* src, int src_len, char* dst, unsigned int* dst_len, const char* key_name);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_encryptFile(int api_sid,const char* zone_name,const char* in_file_path,const char* out_file_path, int num_threads);
#else
int PcAPI_encryptFile(int api_sid,const char* zone_name,const char* in_file_path,const char* out_file_path, int num_threads);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_decryptFile(int api_sid,const char* zone_name,const char* in_file_path,const char* out_file_path, int num_threads);
#else
int PcAPI_decryptFile(int api_sid,const char* zone_name,const char* in_file_path,const char* out_file_path, int num_threads);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_getKeyInfo(int api_sid,const char* key_name,char* key_info_buffer,unsigned int* buffer_length,const char* password);
#else
int PcAPI_getKeyInfo(int api_sid,const char* key_name,char* key_info_buffer,unsigned int* buffer_length,const char* password);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_putKeyInfo(const char* key_info_buffer,unsigned int buffer_length,const char* password);
#else
int PcAPI_putKeyInfo(const char* key_info_buffer,unsigned int buffer_length,const char* password);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_CRC32Check(const char* src,unsigned int src_len);
#else
int PcAPI_CRC32Check(const char* src,unsigned int src_len);
#endif

#if 0
#ifdef WIN32  
int __declspec(dllexport) PcAPI_open(int api_sid, const char* key_name, const char* pathname, unsigned int flags, ...);
#else
int PcAPI_open(int api_sid, const char* key_name, const char* pathname, unsigned int flags, ...);
#endif

#ifdef WIN32  
int __declspec(dllexport) PcAPI_close(int fd);
#else
int PcAPI_close(int fd);
#endif

#ifdef WIN32  
int __declspec(dllexport) PcAPI_read(int api_sid, int fd, void* buf, int count);
#else
int PcAPI_read(int api_sid, int fd, void* buf, int count);
#endif
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_RSA_public_encrypt(
	char*           file_path,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len
);
#else
int PcAPI_RSA_public_encrypt(
	char* 		file_path,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len
);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_RSA_public_encrypt_pkcs(
        char*           file_path,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len
);
#else
int PcAPI_RSA_public_encrypt_pkcs(
        char*           file_path,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len
);
#endif


#ifdef WIN32
int __declspec(dllexport) PcAPI_RSA_x509_encrypt(
        char*           file_path,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len
);
#else
int PcAPI_RSA_x509_encrypt(
        char*           file_path,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len
);
#endif


#ifdef WIN32
int __declspec(dllexport) PcAPI_RSA_private_decrypt(
        char*           file_path,
        char*           key_name,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len
);
#else
int PcAPI_RSA_private_decrypt(
        char*           file_path,
        char*           key_name,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len
);
#endif

#ifdef WIN32
int __declspec(dllexport) PcAPI_RSA_private_decrypt_pkcs(
        char*           file_path,
        char*           key_name,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len
);
#else
int PcAPI_RSA_private_decrypt_pkcs(
        char*           file_path,
        char*           key_name,
        unsigned char*  src,
        int             src_len,
        unsigned char*  dst,
        unsigned int*   dst_len
);
#endif

#if 1 // added by ihjin 190702, for php library function.
#ifdef WIN32
__declspec(dllexport) char* PcAPI_enc_id(
		int api_sid,
		long long enc_col_id,
        unsigned char*  src,
        int             src_len);
#else
char* PcAPI_enc_id(
		int api_sid,
		long long enc_col_id,
        unsigned char*  src,
        int             src_len);
#endif

#ifdef WIN32
__declspec(dllexport) char* PcAPI_enc_nm(
		int api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len);
#else
char* PcAPI_enc_nm(
		int api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len);
#endif

#ifdef WIN32
__declspec(dllexport) char* PcAPI_dec_id(
		int api_sid,
		long long enc_col_id,
        unsigned char*  src,
        int             src_len);
#else
char* PcAPI_dec_id(
		int api_sid,
		long long enc_col_id,
        unsigned char*  src,
        int             src_len);
#endif

#ifdef WIN32
__declspec(dllexport) char* PcAPI_dec_nm(
		int api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len);
#else
char* PcAPI_dec_nm(
		int api_sid,
        const char*     enc_col_name,
        unsigned char*  src,
        int             src_len);
#endif
#endif // added by ihjin 190702, for php library function.


#ifdef WIN32
void __declspec(dllexport) PcAPI_DRBG(unsigned char* rand_bytes, int length);
#else
void PcAPI_DRBG(unsigned char* rand_bytes, int length);
#endif


#ifdef WIN32
int __declspec(dllexport) fileEncrypt(const char* algo,const char* src_file,const char* enc_file);
int __declspec(dllexport) fileDecrypt(const char* algo,const char* src_file,const char* dec_file);
#else
int fileEncrypt(const char* algo,const char* src_file,const char* enc_file);
int fileDecrypt(const char* algo,const char* src_file,const char* dec_file);
#endif



#ifdef WIN32
int __declspec(dllexport) PcAPI_hmac_sha256(const void *key, int key_len,
                           const unsigned char *src, int src_len,
                           unsigned char *dst, unsigned int* dst_len);

int __declspec(dllexport) PcAPI_hmac_sha256_name(const unsigned char *key_name,
                           const unsigned char *src, int src_len,
                           unsigned char *dst, unsigned int* dst_len);

int __declspec(dllexport) PcAPI_hmac_sha256_b64(const void *key, int key_len,
                           const unsigned char *src, int src_len,
                           unsigned char *dst, unsigned int* dst_len);

int __declspec(dllexport) PcAPI_hmac_sha256_b64_name(const unsigned char *key_name,
                           const unsigned char *src, int src_len,
                           unsigned char *dst, unsigned int* dst_len);

int __declspec(dllexport) PcAPI_hmac_sha1(const void *key, int key_len,
                           const unsigned char *src, int src_len,
                           unsigned char *dst, unsigned int* dst_len);

int __declspec(dllexport) PcAPI_hmac_sha1_name(const unsigned char *key_name,
                           const unsigned char *src, int src_len,
                           unsigned char *dst, unsigned int* dst_len);

int __declspec(dllexport) PcAPI_hmac_sha1_b64(const void *key, int key_len,
                           const unsigned char *src, int src_len,
                           unsigned char *dst, unsigned int* dst_len);

int __declspec(dllexport) PcAPI_hmac_sha1_b64_name(const unsigned char *key_name,
                           const unsigned char *src, int src_len,
                           unsigned char *dst, unsigned int* dst_len);
#else /* WIN32 */
#if 1 /* HMAC TEST */
int PcAPI_hmac_sha256(const void *key, int key_len,
                           const unsigned char *src, int src_len,
                           unsigned char *dst, unsigned int* dst_len);

int PcAPI_hmac_sha256_name(const unsigned char *key_name,
                           const unsigned char *src, int src_len,
                           unsigned char *dst, unsigned int* dst_len);

int PcAPI_hmac_sha256_b64(const void *key, int key_len,
                           const unsigned char *src, int src_len,
                           unsigned char *dst, unsigned int* dst_len);

int PcAPI_hmac_sha256_b64_name(const unsigned char *key_name,
                           const unsigned char *src, int src_len,
                           unsigned char *dst, unsigned int* dst_len);

int PcAPI_hmac_sha1(const void *key, int key_len,
                           const unsigned char *src, int src_len,
                           unsigned char *dst, unsigned int* dst_len);

int PcAPI_hmac_sha1_name(const unsigned char *key_name,
                           const unsigned char *src, int src_len,
                           unsigned char *dst, unsigned int* dst_len);

int PcAPI_hmac_sha1_b64(const void *key, int key_len,
                           const unsigned char *src, int src_len,
                           unsigned char *dst, unsigned int* dst_len);

int PcAPI_hmac_sha1_b64_name(const unsigned char *key_name,
                           const unsigned char *src, int src_len,
                           unsigned char *dst, unsigned int* dst_len);
#endif /* HMAC TEST */
#endif /* WIN32 */


#ifdef WIN32
int __declspec(dllexport) PcAPI_ParamCryptFile(int api_sid,const char* crypt_mode,const char* crypt_param_name,const char* in_file_path,const char* out_file_path);
#else
int PcAPI_ParamCryptFile(int api_sid, const char* crypt_mode, const char* crypt_param_name, const char* in_file_path, const char* out_file_path);
#endif

#ifdef WIN32
int __declspec(dllexport) cipher_revision(); 
#else
int cipher_revision(); 
#endif


#ifdef WIN32
int __declspec(dllexport)  PcAPI_getRsaKey(
        int             api_sid,
        const char*     key_name,
        unsigned char*  key_buffer,
        int*   key_len);
#else
int PcAPI_getRsaKey(
        int             api_sid,
        const char*     key_name,
        char*  key_buffer,
        int*   key_len);
#endif


#ifdef __cplusplus
}
#endif
static const int PcAPI_DECRYPT_BUF_SIZE = 2097152;

static const int PcAPI_ERR_UNSUPPORTED_KEY_SIZE    =       -30101;
static const int PcAPI_ERR_UNSUPPORTED_ENC_MODE    =       -30102;
static const int PcAPI_ERR_UNSUPPORTED_CIPHER_TYPE =       -30103;
static const int PcAPI_ERR_ENC_DATA_TOO_SHORT      =       -30104;
static const int PcAPI_ERR_OUT_BUFFER_TOO_SHORT    =       -30105;
static const int PcAPI_ERR_UNSUPPORTED_DIGEST_LEN  =       -30106;
static const int PcAPI_ERR_INVALID_ENC_DATA_LEN    =       -30107;
static const int PcAPI_ERR_B64_FORMAT_ERROR        =       -30108;
static const int PcAPI_ERR_ARIA_KEY_MAKING_ERROR   =       -30109;
static const int PcAPI_ERR_INVALID_ENC_START_POS   =       -30110;
static const int PcAPI_ERR_INVALID_PARAM_VALUE     =       -30111;
static const int PcAPI_ERR_EVP_FAILED              =       -30112;
static const int PcAPI_ERR_SFC_FAILED              =       -30113;
static const int PcAPI_ERR_INVALID_IV_TYPE         =       -30114;
static const int PcAPI_ERR_NO_ENCRYPT_PRIV         =       -30301;
static const int PcAPI_ERR_INVALID_SID             =       -30302;
static const int PcAPI_ERR_INVALID_HOST            =       -30303;
static const int PcAPI_ERR_SOCKET_ERROR            =       -30304;
static const int PcAPI_ERR_CONNECT_ERROR           =       -30305;
static const int PcAPI_ERR_WRITE_ERROR             =       -30306;
static const int PcAPI_ERR_READ_ERROR              =       -30307;
static const int PcAPI_ERR_BUF_OVERFLOW            =       -30308;
static const int PcAPI_ERR_SESS_LOCK_FAIL          =       -30309;
static const int PcAPI_ERR_SVR_SESS_LOCK_FAIL      =       -30310;
static const int PcAPI_ERR_NO_SVR_SESSION          =       -30311;
static const int PcAPI_ERR_NO_FREE_SVR_SESSION     =       -30312;
static const int PcAPI_ERR_NO_EMPTY_SPACE          =       -30313;
static const int PcAPI_ERR_PARSE_ERROR             =       -30316;
static const int PcAPI_ERR_FILE_IO_ERROR           =       -30317;
static const int PcAPI_ERR_APPROVE_REJECTED        =       -30318;
static const int PcAPI_ERR_NAME_NOT_FOUND          =       -30351;
static const int PcAPI_ERR_AMBIGUOUS_NAME          =       -30352;
static const int PcAPI_ERR_COLUMN_NOT_FOUND        =       -30353;
static const int PcAPI_ERR_KEY_NOT_FOUND           =       -30354;
static const int PKSS_SESSION_NOT_FOUND   =         -30701;


#endif /* PCCAPI_H */
