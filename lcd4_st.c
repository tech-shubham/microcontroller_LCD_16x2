#include "lcd4_st.h"
#include "main.h"


/*void delay(unsigned int x)
{
	while(x--);	
}
*/
void lcd_init_4bit()
{

	set_direction(D4, OUTPUT);
	set_direction(D5, OUTPUT);
	set_direction(D6, OUTPUT);
	set_direction(D7, OUTPUT);
	set_direction(EN, OUTPUT);
	set_direction(RS, OUTPUT);
	
	set_value(D4,LOW);
	set_value(D5,LOW);
	set_value(D6,LOW);
	set_value(D7,LOW);
	set_value(EN,LOW);
	set_value(RS,LOW);

	lcd_command(0x02);	//return home
	_delay_ms(5);
	lcd_command(0x28);	//4 bit mode
	_delay_ms(5);
	lcd_command(0x0C);	//lcd on cursor off
	_delay_ms(5);
	lcd_command(0x01);	//clear lcd
	_delay_ms(5);
}


void lcd_command(unsigned char c)
{

	if(c&0x80)
	{
		set_value(D7,HIGH);
	}
	else
		set_value(D7,LOW);
	if(c&0x40)
	{
		set_value(D6,HIGH);
	}
	else
		set_value(D6,LOW);
	if(c&0x20)
	{
		set_value(D5,HIGH);
	}
	else
		set_value(D5,LOW);
	if(c&0x10)
	{
		set_value(D4,HIGH);
	}
	else
		set_value(D4,LOW);

	latch_cmd();

	if(c&0x08)
	{
		set_value(D7,HIGH);
	}
	else
		set_value(D7,LOW);
	if(c&0x04)
	{
		set_value(D6,HIGH);
	}
	else
		set_value(D6,LOW);
	if(c&0x02)
	{
		set_value(D5,HIGH);
	}
	else
		set_value(D5,LOW);
	if(c&0x01)
	{
		set_value(D4,HIGH);
	}
	else
		set_value(D4,LOW);

	latch_cmd();	



}

void lcd_data(unsigned char dat,int row,int pos)
{

	switch(row)
	{
		case 1:
		lcd_command(0x80+pos);
		break;

		case 2:
		lcd_command(0xC0+pos);
		break;

		case 3:
		lcd_command(0x90+pos);
		break;

		case 4:
		lcd_command(0xD0+pos);
		break;
	}

	if(dat&0x80)
	{
		set_value(D7,HIGH);
	}
	else
		set_value(D7,LOW);
	if(dat&0x40)
	{
		set_value(D6,HIGH);
	}
	else
		set_value(D6,LOW);
	if(dat&0x20)
	{
		set_value(D5,HIGH);
	}
	else
		set_value(D5,LOW);
	if(dat&0x10)
	{
		set_value(D4,HIGH);
	}
	else
		set_value(D4,LOW);

	latch_dat();

	if(dat&0x08)
	{
		set_value(D7,HIGH);
	}
	else
		set_value(D7,LOW);
	if(dat&0x04)
	{
		set_value(D6,HIGH);
	}
	else
		set_value(D6,LOW);
	if(dat&0x02)
	{
		set_value(D5,HIGH);
	}
	else
		set_value(D5,LOW);
	if(dat&0x01)
	{
		set_value(D4,HIGH);
	}
	else
		set_value(D4,LOW);

	latch_dat();	



}

void lcd_string(const char *str,int row,int pos)
{
	while(*str!='\0')
	{
		lcd_data(*str,row,pos);
		str++;pos++;
	}

}

void lcd_integer(unsigned long int val,char size,int row, int pos)
{
	int i=0,j;
	char num[6]={0,0,0,0,0,0};
	
	while(i<size)
	{
		num[i]=val%10;
		val=val/10;	
		i++;
	}
	
	for(j=(size-1);j>=0;j--)
	{
		lcd_data(('0'+num[j]),row,pos);
		pos++;
	}
}

void latch_cmd()
{
	set_value(RS,LOW);
	_delay_ms(5);
	set_value(EN,HIGH);
	_delay_ms(5);
	set_value(EN,LOW);
	_delay_ms(5);
}


void latch_dat()
{
	set_value(RS,HIGH);
	_delay_ms(5);
	set_value(EN,HIGH);
	_delay_ms(5);
	set_value(EN,LOW);
	_delay_ms(5);
}