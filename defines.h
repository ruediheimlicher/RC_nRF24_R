/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <joerg@FreeBSD.ORG> wrote this file.  As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return.        Joerg Wunsch
 * ----------------------------------------------------------------------------
 *
 * General stdiodemo defines
 *
 * $Id: defines.h,v 1.1.2.2 2006/10/08 21:51:14 joerg_wunsch Exp $
 */

/* CPU frequency */
#define F_CPU 8000000UL

#define LOOP_CHANNEL 0

// device-nummern

#define TEENSY             0 // Data vom teensy-device

#define TEMPERATUR         1

#define ADC12BIT           2



// Preset fuer Device
#define DEVICE_DDR                              DDRD
#define DEVICE_PORT                             PORTD
#define DEVICE_PIN                              PIND

#define DEVICE_PIN_A                              5
#define DEVICE_PIN_B                              6


#define LOOPLED_PORT                         PORTB
#define LOOPLED_DDR                          DDRB
#define LOOPLED_PIN                          7


// Reset fuer PowerBank
#define PB_LOAD_DDR                              DDRB
#define PB_LOAD_PORT                             PORTB
#define PB_LOAD_PIN                              0


#define ADCPORT                                 PORTC
#define ADCDDR                                  DDRC

// PT1000
#define PT_PORT                                 PORTB
#define PT_DDR                                  DDRB
#define PT_LOAD_PIN                             6
#define PT_LO  PT_PORT &= ~(1<<PT_LOAD_PIN)
#define PT_HI  PT_PORT |= (1<<PT_LOAD_PIN)


//Oszi
#define OSZIPORT                             PORTB
#define OSZIDDR                              DDRB
#define PULSA                                2

#define OSZIA_LO OSZIPORT &= ~(1<<PULSA)
#define OSZIA_HI OSZIPORT |= (1<<PULSA)
#define OSZIA_TOGG OSZIPORT ^= (1<<PULSA)

//#define TEST_PIN                             5

#define SPI_DDR                              DDRB						// DDR fuer SPI
#define SPI_PORT                             PORTB						// Port fuer SPI
#define SPI_PORTPIN                          PINB						// Port-Pin fuer SPI

#define SPI_MOSI                             PB3
#define SPI_MISO                             PB4
#define SPI_CLK                              PB5
#define SPI_SS                               PB2

// SPI_ADC CE-PIN
#define SPI_ADC_CE_PORT                      PORTD
#define SPI_ADC_CE_DDR                       DDRD
#define SPI_ADC_CE                           PD7
#define ADC_BUFSIZE                          4
#define ADC_DELAY                            16


/*
#define V_NEG_DDR                            DDRD
#define V_NEG_PORT                           PORTD
#define V_NEG_PIN                            6
*/

// neu: Ausgang fuer neg Hilfsspannung 
#define V_NEG_DDR                            DDRB
#define V_NEG_PORT                           PORTB
#define V_NEG_PIN                            6



// Port fuer INT1
#define INTERRUPT_PORT                       PORTD
#define INTERRUPT_DDR                        DDRD

//#define INT0_PIN                           PD2
#define INT1_PIN                             PD3


// Ports neu

#define DEVICE    0 // TASK & maincounter
#define CHANNEL   1

#define BATT      2

#define ANALOG0    3

#define ANALOG1    5

#define ANALOG2    7

#define ANALOG3    9



#define DIGI0    13
#define DIGI1    14

// Port fuer Chip select
#define SPI_WL_PORT                          PORTC
#define SPI_WL_DDR                           DDRC
#define SPI_WL_CE                            PC0
#define SPI_WL_CSN                           PC1

// Bits WL
#define WL_ISR_RECV                          7
#define WL_SEND_REQUEST                      6
#define WL_NEXT_REQUEST                      5

#define WL_DATA_PENDENT                      4
#define WL_DATA_WAIT                         3



// PWM-detect

#define PWMHI  1 // Bit fuer HI
#define PWM_DETECT_PORT                      PORTB
#define PWM_DETECT_DDR                       DDRB
#define PWM_DETECT_PIN                       PINB
#define PWM_DETECT                           7 // Pin fuer detect

#define PWM_DETECT_BIT     1 // bit fuer HI
