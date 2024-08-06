#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct BeginnerStack {
    int beginnerArray[MAX_SIZE];
    int beginnerTop;
};

void beginnerInitialize(struct BeginnerStack *beginnerStack) {
    beginnerStack->beginnerTop = -1;
}

int beginnerIsEmpty(struct BeginnerStack *beginnerStack) {
    return beginnerStack->beginnerTop == -1;
}

int beginnerIsFull(struct BeginnerStack *beginnerStack) {
    return beginnerStack->beginnerTop == MAX_SIZE - 1;
}

void beginnerPush(struct BeginnerStack *beginnerStack, int beginnerItem) {
    if (beginnerIsFull(beginnerStack)) {
        printf("Stack overflow\n");
        return;
    }
    beginnerStack->beginnerArray[++beginnerStack->beginnerTop] = beginnerItem;
}

int beginnerPop(struct BeginnerStack *beginnerStack) {
    if (beginnerIsEmpty(beginnerStack)) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return beginnerStack->beginnerArray[beginnerStack->beginnerTop--];
}

int beginnerPeek(struct BeginnerStack *beginnerStack) {
    if (beginnerIsEmpty(beginnerStack)) {
        printf("Stack is empty\n");
        exit(EXIT_FAILURE);
    }
    return beginnerStack->beginnerArray[beginnerStack->beginnerTop];
}

int main() {
    struct BeginnerStack beginnerStack;
    beginnerInitialize(&beginnerStack);

    beginnerPush(&beginnerStack, 10);
    beginnerPush(&beginnerStack, 20);
    beginnerPush(&beginnerStack, 30);

    printf("Top element: %d\n", beginnerPeek(&beginnerStack));

    printf("Popped element: %d\n", beginnerPop(&beginnerStack));
    printf("Popped element: %d\n", beginnerPop(&beginnerStack));

    printf("Is the stack empty? %s\n", beginnerIsEmpty(&beginnerStack) ? "Yes" : "No");

    return 0;
}