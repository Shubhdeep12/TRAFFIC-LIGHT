#include<avr/io.h>
#include<util/delay.h>
void main()
{
DDRA=0B11111111;
DDRB=0B11111111;
DDRC=0B11111111;
DDRD=0B11111111;
int a[11]={0b00111111,0b00000110,0b01011011,0B01001111,0B01100110,0b01101101,0B01111101,0B00000111,0B01111111,0B01101111};
while(1)
{

for(int i=5;i>=0;i--)
{
for(int j=9;j>=0;j--)
{
for(int c=0;c<20;c++)
{
PORTD=0b10001111;
PORTB=a[i];
_delay_ms(10);
PORTD=0b01001111;
PORTB=a[j];
_delay_ms(10);
PORTA=0B00000000;
PORTB=0B00000000;
PORTC=0B00000001;
PORTD=0B00101111;
_delay_ms(10);
}
}
}

PORTA=0B00000000;
PORTB=0B00000000;
PORTC=0B00000010;
PORTD=0B00011111;
_delay_ms(1000);

for(int i=2;i>=0;i--)
{
for(int j=9;j>=0;j--)
{
for(int c=0;c<20;c++)
{

PORTD=0b10001111;
PORTB=a[i];
_delay_ms(10);
PORTD=0b01001111;
PORTB=a[j];
_delay_ms(10);
PORTC=0B00000000;
PORTD=0B11111110;;
PORTA=0B00000100;
PORTB=0B00000110;
_delay_ms(10);
PORTC=0B00000000;
PORTD=0B11111101;;
PORTA=0B00000001;
PORTB=0B00110000;
_delay_ms(10);

PORTC=0B00000000;
PORTD=0B11111011;
PORTA=0B10001000;
PORTB=0B00000000;
_delay_ms(10);
PORTC=0B00000000;
PORTD=0B11110111;
PORTA=0B11000001;
PORTB=0B00000000;
_delay_ms(10);
}
}
}
}
}
