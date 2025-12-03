#include <iostream>
#include <openssl/hmac.h>
using namespace std;
int main(){
    unsigned char key[] = "secret";
    unsigned char data[] = "important data";
    unsigned int len;
    unsigned char* h = HMAC(EVP_sha256(), key, 6, data, 15, NULL, &len);
    for(int i=0;i<len;i++) printf("%02x", h[i]);
}
