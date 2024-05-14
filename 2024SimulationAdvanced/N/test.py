def evaluate_postfix(expression):
    stack = []
    operators = set(['+', '-', '*', '/'])

    for token in expression.split():
        if token not in operators:
            stack.append(int(token))
        else:
            operand2 = stack.pop()
            operand1 = stack.pop()
            if token == '+':
                stack.append(operand1 + operand2)
            elif token == '-':
                stack.append(operand1 - operand2)
            elif token == '*':
                stack.append(operand1 * operand2)
            elif token == '/':
                stack.append(operand1 // operand2)

    return stack[0]

n = int(input())
for _ in range(n):
    expression = input().strip()
    result = evaluate_postfix(expression)
    print(result)

