#include <stdio.h>
#include <unistd.h>

void initSystemSysTick(void);
void SysTick_Handler(void);
void Task1(void);
void Task2(void);
void Task3(void);
void Task4(void);

typedef struct
{
    unsigned short Interval;
    unsigned int LastTick;
    void (*Func)(void);
} TaskType;

static unsigned long SysTickCounter = 0;

static TaskType Tasks[4] = {{500, 0, Task1}, {40, 0, Task2}, {120, 0, Task3}, {1000, 0, Task4}};

static TaskType *Task_ptr = Tasks;

int main(void)
{
    while (1)
    {
        SysTick_Handler();
        usleep(10000);
    }
}

void SysTick_Handler(void)
{
    static unsigned char TaskIndex = 0;
    const unsigned char NumTasks = 4;
    unsigned char called = 0;

    for (TaskIndex = 0; TaskIndex < NumTasks; TaskIndex++)
    {
        if ((SysTickCounter - Task_ptr[TaskIndex].LastTick) >= Task_ptr[TaskIndex].Interval)
        {
            if (!called)
            {
                printf("---\n");
                called = 1;
            }
            (*Task_ptr[TaskIndex].Func)();
            Task_ptr[TaskIndex].LastTick = SysTickCounter;
        }
    }

    if (called)
    {
        printf("---\n");
    }

    SysTickCounter++;
}

void Task1(void)
{
    printf("This is task 1\n");
}

void Task2(void)
{
    printf("This is task 2\n");
}

void Task3(void)
{
    printf("This is task 3\n");
}

void Task4(void)
{
    printf("This is task 4\n");
}
