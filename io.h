
#define	GICD	0xFEE00000
#define	GICR	0xFEF00000

#define	UART2	0xFF1A0000

/* IRQs */
enum{
	IRQfiq		=	-1,

	IRQcntps	=	29,
	IRQcntpns	=	30,

	SPI			=	32,

	IRQether	=	44,

	IRQuart2	=	132,
};

#define BUSUNKNOWN (-1)
#define	CONSOLE		0

