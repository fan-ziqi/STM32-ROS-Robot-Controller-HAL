/*
	Copyright 2022 Fan Ziqi

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

		http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*/

#include "main.h"
#include "bsp_define.h"
#include "bsp_cmd.h"
#include <math.h>

#define LOG_TAG    "CMD"
#include "bsp_log.h"

void cmd_task(void const * argument)
{
	while(1)
	{
//		// for serial paint
//		for(float i = 0.0; i<180.0; i+=0.05)
//		{
//			printf("Paint ID:%d Lable:%s Data:%f Color:%s Style:%s\r\n",1,"sin(i)",sinf(i),"red","SolidLine");
//			printf("Paint ID:%d Lable:%s Data:%f Color:%s Style:%s\r\n",2,"sin(i-60)",sinf(i-30),"green","DashLine");
//			printf("Paint ID:%d Lable:%s Data:%f Color:%s Style:%s\r\n",3,"sin(i+60)",sinf(i+30),"blue","DotLine");
//		}

		cmd();
		osDelay(1);
	}
}
