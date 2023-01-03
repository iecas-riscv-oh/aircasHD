#include "napi/native_api.h"
#include "napi/native_api.h"

#include<cstring>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<unistd.h>
#include<sys/types.h>

#include <typeinfo>
#include <iostream>
#include <errno.h>
#include <string.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#define MAXLINE 4096

static napi_value sendmessage(napi_env env, napi_callback_info info) {
    napi_value result;
    std::string words = "message has send";
    napi_create_string_utf8(env, words.c_str(), words.length(), &result);
    napi_value result2;
    std::string words_2 = "message send unsuccessful with bad code 2";
    napi_create_string_utf8(env, words_2.c_str(), words_2.length(), &result2);
    
    size_t requireArgc = 1;
    size_t argc = 1;
    napi_value args[1] = {nullptr};
    
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(9123); // 服务器端口
    inet_pton(AF_INET, "192.168.43.108", &server_addr.sin_addr.s_addr);
    int sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
    if(sock_fd < 0){
        std::perror("");
        return result2; 
    }
    
    // cout<<"in loop!"<<endl;
    char buf[128] = "test";
    //cin.getline(buf , sizeof(buf));
    int res = sendto(sock_fd , buf , strlen(buf) , 0, (struct sockaddr *) &server_addr, sizeof(server_addr));
    char read_buf[128] = "";
    recvfrom(sock_fd, read_buf, sizeof(read_buf), 0, NULL, NULL);

    close(sock_fd);
    return result;
}
static napi_value send_moveforward(napi_env env, napi_callback_info info) {
    napi_value result;
    std::string words = "message moveforward has send";
    napi_create_string_utf8(env, words.c_str(), words.length(), &result);
    napi_value result2;
    std::string words_2 = "message send unsuccessful with bad code 2";
    napi_create_string_utf8(env, words_2.c_str(), words_2.length(), &result2);
    
    size_t requireArgc = 1;
    size_t argc = 1;
    napi_value args[1] = {nullptr};
    
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(9123); // 服务器端口
    inet_pton(AF_INET, "192.168.43.108", &server_addr.sin_addr.s_addr);
    int sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
    if(sock_fd < 0){
        std::perror("");
        return result2; 
    }
    
    // cout<<"in loop!"<<endl;
    char buf[128] = "forward";
    //cin.getline(buf , sizeof(buf));
    int res = sendto(sock_fd , buf , strlen(buf) , 0, (struct sockaddr *) &server_addr, sizeof(server_addr));
    char read_buf[128] = "";
    recvfrom(sock_fd, read_buf, sizeof(read_buf), 0, NULL, NULL);

    close(sock_fd);
    return result;
}
static napi_value send_movebackward(napi_env env, napi_callback_info info) {
    napi_value result;
    std::string words = "message movebackward has send";
    napi_create_string_utf8(env, words.c_str(), words.length(), &result);
    napi_value result2;
    std::string words_2 = "message send unsuccessful with bad code 2";
    napi_create_string_utf8(env, words_2.c_str(), words_2.length(), &result2);
    
    size_t requireArgc = 1;
    size_t argc = 1;
    napi_value args[1] = {nullptr};
    
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(9123); // 服务器端口
    inet_pton(AF_INET, "192.168.43.108", &server_addr.sin_addr.s_addr);
    int sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
    if(sock_fd < 0){
        std::perror("");
        return result2; 
    }
    
    // cout<<"in loop!"<<endl;
    char buf[128] = "bacward";
    //cin.getline(buf , sizeof(buf));
    int res = sendto(sock_fd , buf , strlen(buf) , 0, (struct sockaddr *) &server_addr, sizeof(server_addr));
    char read_buf[128] = "";
    recvfrom(sock_fd, read_buf, sizeof(read_buf), 0, NULL, NULL);

    close(sock_fd);
    return result;
}
static napi_value send_turnleft(napi_env env, napi_callback_info info) {
    napi_value result;
    std::string words = "message turnleft has send";
    napi_create_string_utf8(env, words.c_str(), words.length(), &result);
    napi_value result2;
    std::string words_2 = "message send unsuccessful with bad code 2";
    napi_create_string_utf8(env, words_2.c_str(), words_2.length(), &result2);
    
    size_t requireArgc = 1;
    size_t argc = 1;
    napi_value args[1] = {nullptr};
    
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(9123); // 服务器端口
    inet_pton(AF_INET, "192.168.43.108", &server_addr.sin_addr.s_addr);
    int sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
    if(sock_fd < 0){
        std::perror("");
        return result2; 
    }
    
    // cout<<"in loop!"<<endl;
    char buf[128] = "turleft";
    //cin.getline(buf , sizeof(buf));
    int res = sendto(sock_fd , buf , strlen(buf) , 0, (struct sockaddr *) &server_addr, sizeof(server_addr));
    char read_buf[128] = "";
    recvfrom(sock_fd, read_buf, sizeof(read_buf), 0, NULL, NULL);

    close(sock_fd);
    return result;
}
static napi_value send_turnright(napi_env env, napi_callback_info info) {
    napi_value result;
    std::string words = "message turnright has send";
    napi_create_string_utf8(env, words.c_str(), words.length(), &result);
    napi_value result2;
    std::string words_2 = "message send unsuccessful with bad code 2";
    napi_create_string_utf8(env, words_2.c_str(), words_2.length(), &result2);
    
    size_t requireArgc = 1;
    size_t argc = 1;
    napi_value args[1] = {nullptr};
    
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(9123); // 服务器端口
    inet_pton(AF_INET, "192.168.43.108", &server_addr.sin_addr.s_addr);
    int sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
    if(sock_fd < 0){
        std::perror("");
        return result2; 
    }
    
    // cout<<"in loop!"<<endl;
    char buf[128] = "turight";
    //cin.getline(buf , sizeof(buf));
    int res = sendto(sock_fd , buf , strlen(buf) , 0, (struct sockaddr *) &server_addr, sizeof(server_addr));
    char read_buf[128] = "";
    recvfrom(sock_fd, read_buf, sizeof(read_buf), 0, NULL, NULL);

    close(sock_fd);
    return result;
}
static napi_value send_stop(napi_env env, napi_callback_info info) {
    napi_value result;
    std::string words = "message stop has send";
    napi_create_string_utf8(env, words.c_str(), words.length(), &result);
    napi_value result2;
    std::string words_2 = "message send unsuccessful with bad code 2";
    napi_create_string_utf8(env, words_2.c_str(), words_2.length(), &result2);
    
    size_t requireArgc = 1;
    size_t argc = 1;
    napi_value args[1] = {nullptr};
    
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(9123); // 服务器端口
    inet_pton(AF_INET, "192.168.43.108", &server_addr.sin_addr.s_addr);
    int sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
    if(sock_fd < 0){
        std::perror("");
        return result2; 
    }
    
    // cout<<"in loop!"<<endl;
    char buf[128] = "stopvel";
    //cin.getline(buf , sizeof(buf));
    int res = sendto(sock_fd , buf , strlen(buf) , 0, (struct sockaddr *) &server_addr, sizeof(server_addr));
    char read_buf[128] = "";
    recvfrom(sock_fd, read_buf, sizeof(read_buf), 0, NULL, NULL);

    close(sock_fd);
    return result;
}
static napi_value sendpicture(napi_env env, napi_callback_info info) {
    napi_value result;
    std::string words = "picture has send";
    napi_create_string_utf8(env, words.c_str(), words.length(), &result);
    napi_value result2;
    std::string words_2 = "picture send unsuccessful with bad code 2";
    napi_create_string_utf8(env, words_2.c_str(), words_2.length(), &result2);
    
    size_t requireArgc = 1;
    size_t argc = 1;
    napi_value args[1] = {nullptr};
    
    int   sockfd, len;
    char  buffer[MAXLINE];
    struct sockaddr_in  servaddr;
    FILE *fq;

    if( (sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0){
        printf("create socket error: %s(errno: %d)\n", strerror(errno),errno);
        return result2;
    }
    
    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(6666);
    if( inet_pton(AF_INET, "192.168.43.108", &servaddr.sin_addr) <= 0){
        return result2;
    }
    
    if( connect(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) < 0){
        printf("connect error: %s(errno: %d)\n",strerror(errno),errno);
        return 0;
    }
    if( ( fq = fopen("/data/zp/test.jpg","rb") ) == NULL ){
        printf("File open.\n");
        close(sockfd);
        exit(1);
    }
    bzero(buffer,sizeof(buffer));
    while(!feof(fq)){
        len = fread(buffer, 1, sizeof(buffer), fq);
        if(len != write(sockfd, buffer, len)){
            printf("write.\n");
            break;
        }
    }
    close(sockfd);
    fclose(fq);
    return result;
}

EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports)
{
    napi_property_descriptor desc[] = {
        { "sendmessage", nullptr, sendmessage, nullptr, nullptr, nullptr, napi_default, nullptr },
        { "send_moveforward", nullptr, send_moveforward, nullptr, nullptr, nullptr, napi_default, nullptr },
        { "send_movebackward", nullptr, send_movebackward, nullptr, nullptr, nullptr, napi_default, nullptr },
        { "send_turnleft", nullptr, send_turnleft, nullptr, nullptr, nullptr, napi_default, nullptr },
        { "send_turnright", nullptr, send_turnright, nullptr, nullptr, nullptr, napi_default, nullptr },
        { "send_stop", nullptr, send_stop, nullptr, nullptr, nullptr, napi_default, nullptr },
        { "sendmessage", nullptr, sendmessage, nullptr, nullptr, nullptr, napi_default, nullptr },
        { "sendpicture", nullptr, sendpicture, nullptr, nullptr, nullptr, napi_default, nullptr },
//        { "getHelloString", nullptr, getHelloString, nullptr, nullptr, nullptr, napi_default, nullptr },
    };
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    return exports;
}
EXTERN_C_END

static napi_module demoModule = {
    .nm_version =1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = Init,
    .nm_modname = "aircashd",
    .nm_priv = ((void*)0),
    .reserved = { 0 },
};

extern "C" __attribute__((constructor)) void RegisterHelloModule(void)
{
    napi_module_register(&demoModule);
}
