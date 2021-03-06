/* 包含头文件代码 */
#include "template.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/

/* 私有(仅本源文件内使用)宏、枚举、结构体的定义 */

/* 宏命名使用下划线命名法，单词全大写 */
#define MAX_DEVICES  (128U)  /* 无符号整型数字，均应加 "U" 后缀 */

/*******************************************************************************
 * Variables
 ******************************************************************************/

/* 所有全局变量(外部，静态，常量，指针)的定义 */

/* 变量命名使用 CamelCase (小骆驼峰法)，即第一个单词以小写字母开始，
   第二个单词以及后面的每一个单词的首字母大写 */
uint32_t g_deviceIndex = 0;            /* 作用域可在文件外的全局变量加 g_ 前缀 */
static device_config_t s_deviceConfig; /* 使用 static 修饰的全局变量加 s_ 前缀 */
const uint32_t g_maxDevices = MAX_DEVICES;
static volatile uint8_t *s_deviceData; /* volatile, const 修饰或指针型变量，
                                          无需任何特殊表示 */

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/* 内部函数(即 static 修饰)的声明 */

static uint32_t GetDeviceIndex(void);

/*******************************************************************************
 * Code
 ******************************************************************************/

/* 所有函数(外部，内部)的定义 */

/* 函数命名使用 Pascal (大骆驼峰法)，即把变量名称的第一个字母也大写
   函数命名可由 [Action][Module][Feature] 组成，动作在前，特性在后
   一系列同类函数，可加 MODULE_ 前缀，前缀单词全大写。 */
void InitDevice(void)                /* 或者 DEVICE_Init() */
{
    s_deviceConfig.index = 1;
    s_deviceConfig.mode = kDeviceMode1;
    memset(s_deviceConfig.data, 5, sizeof(s_deviceConfig.data));
    s_deviceConfig.isEnabled = true;
}

static uint32_t GetDeviceIndex(void) /* 或者 DEVICE_GetIndex() */
{
    return s_deviceConfig.index;
}

int main(void)
{
    /* 局部变量定义应总是放在所在最小作用域(即最近的 {} 内)里的最前面 */
    uint8_t i = 0;  /* 一行代码仅定义一个变量 */
    uint8_t j = 0;

    /* 永远不要使用 Tab 键（使用4个空格代替 Tab），需要以4个空格为单位的缩进 */
    for (; i + j < 5;)
    {                  /* 不使用 K&R 风格花括号，左右括号都需要独占一行 */
        i++;
        j++;
    }

    while (1)
    {
    }
}
