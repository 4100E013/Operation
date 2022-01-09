int fs,i;
int data_in,                                          //資料輸入
    data_query,                                       //資料查詢
    data_rev,                                         //資料修改
    data_del;                                         //資料刪除

int data_flag[100];

struct struct1
{
    char Vendor[100][100],model[100][100];            //Vendor  廠商    model  型號
    int Process[100],tdp[100];                        //Process 製程    tdp    TDP
    float hz[100];
}data;

#define CLE                     "\e[0m"             //清除格式

#define RED                     "\e[0;31m"          //深紅
#define L_RED                   "\e[1;31m"          //亮紅
#define GREEN                   "\e[0;32m"          //深綠
#define L_GREEN                 "\e[1;32m"          //亮綠
#define YELLOW                  "\e[0;33m"          //黃色
#define L_YELLOW                "\e[1;33m"          //亮黃
#define BLUE                    "\e[0;34m"          //深藍
#define L_BLUE                  "\e[1;34m"          //亮蓝
#define CYAN                    "\e[0;36m"          //青色
#define L_CYAN                  "\e[1;36m"          //亮青

#define BLACK                   "\e[0;30m"          //黑色
#define BROWN                   "\e[1;30m"          //褐色
#define GRAY                    "\e[0;37m"          //灰色
#define PURPLE                  "\e[0;35m"          //紫色
#define PINK                    "\e[1;35m"          //粉色

void open(void);         //初始畫面
void function(void);     //功能選單
void judge(void);        //判別功能
void in_error(void);     //輸入錯誤

void function1(void);    //1號功能(新增)
void function2(void);    //2號功能(查詢)
void function3(void);    //3號功能(清單)
void function4(void);    //4號功能(刪除)
void function5(void);    //5號功能(修改)
