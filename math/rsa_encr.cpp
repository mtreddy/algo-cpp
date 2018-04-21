#include<iostream>
#include"rsa_lib.h"
using namespace std;
class EncrDecr{
    public:
        u64_t encrypt_message(u64_t msg);
        u64_t decrypt_message( u64_t num);
};

u64_t EncrDecr::encrypt_message(u64_t msg)
{
    /*
     * E = 7 (relative prime with (P-1)*(Q-1))
     * N = P*Q
     * Phi = (P-1)*(Q-1)
     * enc = m**E(mod(N))
     */
      u64_t enc = pow_mod(msg, E, N); 
      return enc;
}
u64_t EncrDecr::decrypt_message( u64_t num)
{
     /*
     * E = 7 (relative prime with (P-1)*(Q-1))
     * N = P*Q
     * Phi = (P-1)*(Q-1)
     * E*D = 1(mod((P-1)*(Q-1))
     * decry = num**D(mod(N))
     *
     */
    u64_t D = pow_mod(1,1,(P-1)*(Q-1));
    u64_t decr = pow_mod(num,D,N);
    return decr;
}
int main()
{
    class EncrDecr obj;
    u64_t msg_num = 80;
    u64_t cmsg_num = 0;
    u64_t dmsg_num = 0;
    cout << "Encrypting number :" << msg_num <<endl;
    cmsg_num = obj.encrypt_message(msg_num);
    cout << "Encrypted number :" << cmsg_num <<endl;
    dmsg_num = obj.decrypt_message(cmsg_num);
    cout << "Decrypted number :" << dmsg_num <<endl;
}
