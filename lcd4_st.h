#define D4 	P24
#define D5 	P25
#define D6 	P26
#define D7 	P27
#define EN 	P18
#define RS 	P19


extern void delay(unsigned int x);
void lcd_init_4bit(void);
void lcd_command(unsigned char c);
void lcd_data(unsigned char dat,int row,int pos);
void lcd_string(const char *str,int row,int pos);
void lcd_integer(unsigned long int val,char size,int row, int pos);
void latch_cmd(void);
void latch_dat(void);

