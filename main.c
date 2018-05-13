

#include "lcd4_st.h"
#include "main.h"

void set_direction(char *str, unsigned int p_direction)
{
	if(str[1]=='A')
	{
		if(p_direction == INPUT)
		{
			DDRA &=~(1<<(str[3]-48));
		}
		else if(p_direction == OUTPUT)
		{
			DDRA |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='B')
	{
		if(p_direction == INPUT)
		{
			DDRB &=~(1<<(str[3]-48));
		}
		else if(p_direction == OUTPUT)
		{
			DDRB |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='C')
	{
		if(p_direction == INPUT)
		{
			DDRC &=~(1<<(str[3]-48));
		}
		else if(p_direction == OUTPUT)
		{
			DDRC |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='D')
	{
		if(p_direction == INPUT)
		{
			DDRD &=~(1<<(str[3]-48));
		}
		else if(p_direction == OUTPUT)
		{
			DDRD |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='E')
	{
		if(p_direction == INPUT)
		{
			DDRE &=~(1<<(str[3]-48));
		}
		else if(p_direction == OUTPUT)
		{
			DDRE |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='F')
	{
		if(p_direction == INPUT)
		{
			DDRF &=~(1<<(str[3]-48));
		}
		else if(p_direction == OUTPUT)
		{
			DDRF |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='G')
	{
		if(p_direction == INPUT)
		{
			DDRG &=~(1<<(str[3]-48));
		}
		else if(p_direction == OUTPUT)
		{
			DDRG |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='H')
	{
		if(p_direction == INPUT)
		{
			DDRH &=~(1<<(str[3]-48));
		}
		else if(p_direction == OUTPUT)
		{
			DDRH |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='J')
	{
		if(p_direction == INPUT)
		{
			DDRJ &=~(1<<(str[3]-48));
		}
		else if(p_direction == OUTPUT)
		{
			DDRJ |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='K')
	{
		if(p_direction == INPUT)
		{
			DDRK &=~(1<<(str[3]-48));
		}
		else if(p_direction == OUTPUT)
		{
			DDRK |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='L')
	{
		if(p_direction == INPUT)
		{
			DDRL &=~(1<<(str[3]-48));
		}
		else if(p_direction == OUTPUT)
		{
			DDRL |=(1<<(str[3]-48));
		}
	}
}

void set_value(char *str, unsigned int p_value)
{
	if(str[1]=='A')
	{
		if(p_value == LOW)
		{
			PORTA &=~(1<<(str[3]-48));
		}
		else if(p_value == HIGH)
		{
			PORTA |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='B')
	{
		if(p_value == LOW)
		{
			PORTB &=~(1<<(str[3]-48));
		}
		else if(p_value == HIGH)
		{
			PORTB |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='C')
	{
		if(p_value == LOW)
		{
			PORTC &=~(1<<(str[3]-48));
		}
		else if(p_value == HIGH)
		{
			PORTC |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='D')
	{
		if(p_value == LOW)
		{
			PORTD &=~(1<<(str[3]-48));
		}
		else if(p_value == HIGH)
		{
			PORTD |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='E')
	{
		if(p_value == LOW)
		{
			PORTE &=~(1<<(str[3]-48));
		}
		else if(p_value == HIGH)
		{
			PORTE |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='F')
	{
		if(p_value == LOW)
		{
			PORTF &=~(1<<(str[3]-48));
		}
		else if(p_value == HIGH)
		{
			PORTF |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='G')
	{
		if(p_value == LOW)
		{
			PORTG &=~(1<<(str[3]-48));
		}
		else if(p_value == HIGH)
		{
			PORTG |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='H')
	{
		if(p_value == LOW)
		{
			PORTH &=~(1<<(str[3]-48));
		}
		else if(p_value == HIGH)
		{
			PORTH |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='J')
	{
		if(p_value == LOW)
		{
			PORTJ &=~(1<<(str[3]-48));
		}
		else if(p_value == HIGH)
		{
			PORTJ |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='K')
	{
		if(p_value == LOW)
		{
			PORTK &=~(1<<(str[3]-48));
		}
		else if(p_value == HIGH)
		{
			PORTK |=(1<<(str[3]-48));
		}
	}
	
	else if(str[1]=='L')
	{
		if(p_value == LOW)
		{
			PORTL &=~(1<<(str[3]-48));
		}
		else if(p_value == HIGH)
		{
			PORTL |=(1<<(str[3]-48));
		}
	}
	
	

}

int digital_Read(unsigned char *str)
{
	if(str[1]=='A')
	{
		return(PINA&&(1<<(str[3]-48)));
	}
	
	else if(str[1]=='B')
	{
		return(PINB&&(1<<(str[3]-48)));
	}
	
	else if(str[1]=='C')
	{
		return(PINC&&(1<<(str[3]-48)));
	}
	
	else if(str[1]=='D')
	{
		return(PIND&&(1<<(str[3]-48)));
	}
	
	else if(str[1]=='E')
	{
		return(PINE&&(1<<(str[3]-48)));
	}
	
	else if(str[1]=='F')
	{
		return(PINF&&(1<<(str[3]-48)));
	}
	
	else if(str[1]=='G')
	{
		return(PING&&(1<<(str[3]-48)));
	}
	
	else if(str[1]=='H')
	{
		return(PINH&&(1<<(str[3]-48)));
	}
	
	else if(str[1]=='J')
	{
		return(PINJ&&(1<<(str[3]-48)));
	}
	
	else if(str[1]=='K')
	{
		return(PINK&&(1<<(str[3]-48)));
	}
	
	else if(str[1]=='L')
	{
		return(PINL&&(1<<(str[3]-48)));
	}
}

int main(void)
{

	lcd_init_4bit();

	
	lcd_string("Cool Tech",1,0);
	lcd_string("Jarvis",2,0);
	
	
	while(1)
	{	
		
	}
}




