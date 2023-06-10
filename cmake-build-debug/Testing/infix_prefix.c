//Algorithm


/*
 1. Scan the symbols of the expression from left to right and for each symbol, do the following:
 a. If the symbol is an operand
    --Print that symbol onto the screen.
 b. If the symbol if is a left parenthesis
    --push it to the stack.
c. If the symbol is a right parenthesis
    --pop all the operators from the stack upto the first left parenthesis and print them on the screen.
    --Discard the left and right parenthesis.
d. If symbol is an operator
    --If the precedence of the operator in the stack is higher than the current operator
            --then pop the operators on the screen and push the current operator
    --else
            --push the current operator in the stack

 */
