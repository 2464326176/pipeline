//**************************
// Author:  yh
// Time:    2022/4/26
//**************************

#ifndef PIPELINE_LOG_H
#define PIPELINE_LOG_H



/*
#define IC_NO_LOG_LEVEL			0
#define IC_DEBUG_LEVEL			1
#define IC_INFO_LEVEL			2
#define IC_WARNING_LEVEL		3
#define IC_ERROR_LEVEL			4;
*/

/************************************************************************/
/*
const char *file：文件名称
int line：文件行号
int level：错误级别
		0 -- 没有日志
		1 -- debug级别
		2 -- info级别
		3 -- warning级别
		4 -- err级别
int status：错误码
const char *fmt：可变参数
*/
/************************************************************************/
//实际使用的Level
extern int LogLevel[5];

void ITCAST_LOG(const char *file, int line, int level, int status, const char *fmt, ...);

enum LOG_LEVEL {
    VERBOSE,
    DEBUG,
    INFO,
    WARN,
    ERROR,
    ASSERT,
} log_level;


class Log {


public:
    Log() {

    }

    ~Log() {

    }
private:


};


#endif //PIPELINE_LOG_H
