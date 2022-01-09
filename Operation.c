#include <stdio.h>
#include <stdlib.h>
#include "definition.h"

int main(void)      //主程式
{
    open();

    while(1)
    {
        function();

        while(1){printf("請輸入選項:"); fflush(stdin); if(scanf("%d",&fs)==1) break; else {printf("輸入錯誤\n"); system("pause"); function();}}
        
        if(fs < 6 && fs > 0) judge();
        else if(fs == 6) return 0;
        else {printf("並無此選項請重新輸入\n"); system("pause"); function();}
    }

    return 0;
}


void open()         //初始畫面
{
    printf("\n\n\n");
    printf("\t\t■■■■■■■■■■■■■■■■■■\n");
    printf("\t\t■■\t\t\t\t■■\n");
    printf("\t\t■■\t\t\t\t■■\n");
    printf("\t\t■■\t       吳毅修\t\t■■\n");
    printf("\t\t■■\t\t\t\t■■\n");
    printf("\t\t■■\t\t\t\t■■\n");
    printf("\t\t■■\t      4100E013\t\t■■\n");
    printf("\t\t■■\t\t\t\t■■\n");
    printf("\t\t■■\t\t\t\t■■\n");
    printf("\t\t■■\t      CPU參數\t\t■■\n");
    printf("\t\t■■\t\t\t\t■■\n");
    printf("\t\t■■\t\t\t\t■■\n");
    printf("\t\t■■■■■■■■■■■■■■■■■■\n");
    system("pause");
}

void function()     //功能選單
{
    system("cls");
    printf("\n\n\n");
    printf("\t\t"CYAN"■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n"CLE);
    printf("\t\t"CYAN"■■\t\t\t\t\t\t\t■■\n");
    printf("\t\t"CYAN"■■\t\t\t  "GRAY"操作介面     \t\t\t"CYAN"■■\n"CLE);
    printf("\t\t"CYAN"■■\t\t\t\t\t\t\t■■\n");
    printf("\t\t"CYAN"■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n"CLE);
    printf("\t\t"CYAN"■■\t\t\t\t\t\t\t■■\n"CLE);
    printf("\t\t"CYAN"■■\t\t\t  "L_RED"(1)新增"CYAN"     \t\t\t■■\n"CLE);
    printf("\t\t"CYAN"■■\t\t\t\t\t\t\t■■\n"CLE);
    printf("\t\t"CYAN"■■\t\t\t  "L_GREEN"(2)查詢"CYAN"     \t\t\t■■\n"CLE);
    printf("\t\t"CYAN"■■\t\t\t\t\t\t\t■■\n"CLE);
    printf("\t\t"CYAN"■■\t\t\t  "L_YELLOW"(3)清單"CYAN"     \t\t\t■■\n"CLE);
    printf("\t\t"CYAN"■■\t\t\t\t\t\t\t■■\n"CLE);
    printf("\t\t"CYAN"■■\t\t\t  "L_BLUE"(4)刪除"CYAN"     \t\t\t■■\n"CLE);
    printf("\t\t"CYAN"■■\t\t\t\t\t\t\t■■\n"CLE);
    printf("\t\t"CYAN"■■\t\t\t  "L_CYAN"(5)修改"CYAN"     \t\t\t■■\n"CLE);
    printf("\t\t"CYAN"■■\t\t\t\t\t\t\t■■\n"CLE);
    printf("\t\t"CYAN"■■\t\t\t  "PURPLE"(6)離開"CYAN"     \t\t\t■■\n"CLE);
    printf("\t\t"CYAN"■■\t\t\t\t\t\t\t■■\n"CLE);
    printf("\t\t"CYAN"■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n"CLE);
}

void judge()        //功能判別
{
    int flag;

    switch(fs)
        {
            case 1:function1(); break;  //新增
            case 2:function2(); break;  //查詢
            case 3:function3(); break;  //清單
            case 4:function4(); break;  //刪除
            case 5:function5(); break;  //修改
        }
}

void in_error()     //輸入格式錯誤
{
    fflush(stdin);
    printf("\n\n\t\t輸入錯誤 請輸入整數\n\t\t");
    system("pause");    
}

void function1()    //一號功能(新增)
{
    system("cls");
    printf("\n\n\t\t請輸入要新增第幾筆資料:");
	if(scanf("%d",&data_in) == 1)                               //判斷輸入格式
    {
        if(data_flag[data_in] != 1)
        {
            data_flag[data_in] = 1;
            system("cls");
		    printf("\n\n\t\t第%d筆資料輸入\n\n",data_in);
		    printf("\n\n\t\t請輸入廠商(Intel AMD):");
		    scanf("%s",&data.Vendor[data_in]);
		    fflush(stdin);
		    printf("\n\n\t\t請輸入型號(等級-代號):");
		    scanf("%s",&data.model[data_in]);
		    fflush(stdin);
    	    printf("\n\n\t\t請輸入製程(nm):");
	 	    scanf("%d",&data.Process[data_in]);
	 	    fflush(stdin);
	 	    printf("\n\n\t\t請輸入頻率(Ghz):");
	        scanf("%f",&data.hz[data_in]);
	        fflush(stdin);
            printf("\n\n\t\t請輸入TDP(W):");
	        scanf("%d",&data.tdp[data_in]);
	        fflush(stdin);
	        printf("\n\n");
	        system("pause");

            system("cls");
            printf("\n\n\n");
            printf("\t\t■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t\t第%d筆資料預覽\t\t\t■■\n",data_in);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t   廠家:\t%s\t\t\t■■\n",data.Vendor[data_in]);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t   型號:\t%s\t\t\t■■\n",data.model[data_in]);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t   製程:\t%d\tnm\t\t■■\n",data.Process[data_in]);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t   頻率:\t%.1f\tGhz\t\t■■\n",data.hz[data_in]);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t   TDP:\t\t%d\tw\t\t■■\n",data.tdp[data_in]);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	        system("pause");
        }
        else
        {
            system("cls");
            printf("\n\n\t\t第%d筆資料已存在\n\t\t",data_in);
            system("pause");
        }
    }
    else in_error();

}

void function2()    //二號功能(查詢)
{
    system("cls");

    printf("\n\n\t\t請輸入要查詢第幾筆資料:");

	if(scanf("%d",&data_query) == 1)
    {
        if(data_flag[data_query] == 1)
        {
            system("cls");
            printf("\n\n\n");
            printf("\t\t■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t\t第%d筆資料\t\t\t■■\n",data_query);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t   廠家:\t%s\t\t\t■■\n",data.Vendor[data_query]);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t   型號:\t%s\t\t\t■■\n",data.model[data_query]);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t   製程:\t%d\tnm\t\t■■\n",data.Process[data_query]);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t   頻率:\t%.1f\tGhz\t\t■■\n",data.hz[data_query]);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t   TDP:\t\t%d\tw\t\t■■\n",data.tdp[data_query]);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	        system("pause");
    }
        else
        {   
            system("cls");
            printf("\n\n\t\t第%d筆資料不存在 無法查詢\n\t\t",data_query);
            system("pause");
        }
    }
    else in_error();
}

void function3()    //三號功能(清單)
{
    int flag;

    flag=0;
    system("cls");
    printf("\n\n\t\t");

    for(i=1;i<=100;i++)
    {
        if(data_flag[i] == 1)
        {
            flag = 1;
            printf("第%d筆存在資料\t 型號:%s\n\t\t",i,data.model[i]);
        }
    }

    if(flag==1) {printf("\n"); system("pause");}
    else
    {
        printf("沒有資料\n\t\t");
        system("pause");
    }

}

void function4()    //四號功能(刪除)
{
    system("cls");

    printf("\n\n\t\t請輸入要刪除哪一筆資料:");
    if(scanf("%d",&data_del) == 1)
    {
        if(data_flag[data_del] == 1)
        {
            data_flag[data_del] = 0;
            system("cls");
            printf("\n\t\t第%d筆資料已刪除\n\t\t",data_del);
            system("pause");
        }
        else
        {
            system("cls");
            printf("\n\n\t\t第%d筆資料不存在 無法刪除\n\t\t",data_del);
            system("pause");
        }
    }
    else in_error();

}

void function5()    //五號功能(修改)
{
    system("cls");

    printf("\n\n\t\t請輸入要修改哪一筆資料:");
    if(scanf("%d",&data_rev) == 1)
    {
        if(data_flag[data_rev] == 1)
        {
            system("cls");
		    printf("\n\n\t\t第%d筆資料修改\n\n",data_rev);
		    printf("\n\n\t\t請輸入廠商(Intel AMD):");
		    scanf("%s",&data.Vendor[data_rev]);
		    fflush(stdin);
		    printf("\n\n\t\t請輸入型號(等級-代號):");
		    scanf("%s",&data.model[data_rev]);
		    fflush(stdin);
    	    printf("\n\n\t\t請輸入製程(nm):");
	 	    scanf("%d",&data.Process[data_rev]);
	 	    fflush(stdin);
	 	    printf("\n\n\t\t請輸入頻率(Ghz):");
	        scanf("%f",&data.hz[data_rev]);
	        fflush(stdin);
            printf("\n\n\t\t請輸入TDP(W):");
	        scanf("%d",&data.tdp[data_rev]);
	        fflush(stdin);
	        printf("\n\n");
	        system("pause");

            system("cls");
            printf("\n\n\n");
            printf("\t\t■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t\t第%d筆資料修改預覽\t\t■■\n",data_rev);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t   廠家:\t%s\t\t\t■■\n",data.Vendor[data_rev]);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t   型號:\t%s\t\t\t■■\n",data.model[data_rev]);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t   製程:\t%d\tnm\t\t■■\n",data.Process[data_rev]);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t   頻率:\t%.1f\tGhz\t\t■■\n",data.hz[data_rev]);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■\t\t   TDP:\t\t%d\tw\t\t■■\n",data.tdp[data_rev]);
            printf("\t\t■■\t\t\t\t\t\t\t■■\n");
            printf("\t\t■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	        system("pause");
        }
        else
        {
            system("cls");
            printf("\n\n\t\t第%d筆資料不存在 無法修改\n\t\t",data_rev);
            system("pause");
        }
    }
    else in_error();
}
