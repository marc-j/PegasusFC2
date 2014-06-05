/*
 * Queue.h
 *
 *  Created on: 4 juin 2014
 *      Author: alienx
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include <FreeRTOS.h>
#include <queue.h>
namespace os
{

  class Queue
  {
  public:
    Queue (const UBaseType_t uxQueueLength, const UBaseType_t uxItemSize);

    bool send(const void * const pvItemToQueue, TickType_t xTicksToWait);
    bool receive(void *buffer, TickType_t xTicksToWait);

  private:
    xQueueHandle queue;
  };

} /* namespace os */

#endif /* QUEUE_H_ */