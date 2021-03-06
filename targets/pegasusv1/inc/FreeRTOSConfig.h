/*
 * FreeRTOSConfig.h
 *
 *  Created on: 3 juin 2014
 *      Author: alienx
 */

#ifndef FREERTOSCONFIG_H_
#define FREERTOSCONFIG_H_


#define configUSE_PREEMPTION			1
#define configUSE_IDLE_HOOK				1
#define configUSE_TICK_HOOK				0
#define configCPU_CLOCK_HZ				( SYSCLK_FREQ )
#define configTICK_RATE_HZ				( ( TickType_t ) 1000 )
#define configMAX_PRIORITIES			( (unsigned portBASE_TYPE)5 )
#define configMINIMAL_STACK_SIZE		( ( unsigned short ) 130 )
#define configTOTAL_HEAP_SIZE			( ( size_t ) (75 * 1024) )
#define configMAX_TASK_NAME_LEN			( 16 )
#define configUSE_TRACE_FACILITY		1
#define configUSE_16_BIT_TICKS			0
#define configIDLE_SHOULD_YIELD			1
#define configUSE_MUTEXES				1
#define configQUEUE_REGISTRY_SIZE		10
#define configCHECK_FOR_STACK_OVERFLOW	2
#define configUSE_RECURSIVE_MUTEXES		1
#define configUSE_MALLOC_FAILED_HOOK	1
#define configUSE_APPLICATION_TASK_TAG	0
#define configUSE_COUNTING_SEMAPHORES	0
#define configGENERATE_RUN_TIME_STATS	0

/* Co-routine definitions. */
#define configUSE_CO_ROUTINES 		0
#define configMAX_CO_ROUTINE_PRIORITIES ( 2 )

/* Software timer definitions. */
#define configUSE_TIMERS				1
#define configTIMER_TASK_PRIORITY		(configMAX_PRIORITIES - 1)
#define configTIMER_QUEUE_LENGTH		10
#define configTIMER_TASK_STACK_DEPTH	( configMINIMAL_STACK_SIZE * 2 )

/* Set the following definitions to 1 to include the API function, or zero
to exclude the API function. */
#define INCLUDE_vTaskPrioritySet		1
#define INCLUDE_uxTaskPriorityGet		1
#define INCLUDE_vTaskDelete				1
#define INCLUDE_vTaskCleanUpResources	1
#define INCLUDE_vTaskSuspend			1
#define INCLUDE_vTaskDelayUntil			1
#define INCLUDE_vTaskDelay				1
#define INCLUDE_xTaskGetSchedulerState               1
#define INCLUDE_xTaskGetCurrentTaskHandle            1
#define INCLUDE_uxTaskGetStackHighWaterMark          1



/* Interrupt priorities used by the kernel port layer itself.  These are generic
to all Cortex-M ports, and do not rely on any particular library functions. */
#define configKERNEL_INTERRUPT_PRIORITY 		15 << 4 /* equivalent to NVIC priority 15 */
/* !!!! configMAX_SYSCALL_INTERRUPT_PRIORITY must not be set to zero !!!!
See http://www.FreeRTOS.org/RTOS-Cortex-M3-M4.html. */
#define configMAX_SYSCALL_INTERRUPT_PRIORITY 	 3 << 4 /* equivalent to NVIC priority  3 */

/* This is the value being used as per the ST library which permits 16
   priority values, 0 to 15.  This must correspond to the
   configKERNEL_INTERRUPT_PRIORITY setting.  Here 15 corresponds to the lowest
   NVIC value of 255. */
#define configLIBRARY_KERNEL_INTERRUPT_PRIORITY      15
/* Definitions that map the FreeRTOS port interrupt handlers to their CMSIS
standard names. */
#define vPortSVCHandler SVC_Handler
#define xPortPendSVHandler PendSV_Handler
#define xPortSysTickHandler SysTick_Handler

#endif /* FREERTOSCONFIG_H_ */
