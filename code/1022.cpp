#include <iostream>
using namespace std;

typedef struct Expression Expression;
struct Expression {
     int num;
     int den;
};

enum Operator {
     SUM,
     SUB,
     MULT,
     DIV,
     NONE
};

void Program();
Expression expression_read();
Operator operator_read();
Expression expression_operation(Operator op, Expression exp1, Expression exp2);
Expression expression_simplify(Expression exp);
int MDC(int a, int b);

int main()
{
     int num_exec;
     cin >> num_exec;

     for (int i = 0; i < num_exec; ++i) {
          Program();
     }

     return 0;
}

void Program()
{
     Expression exp1, exp2;
     Operator op;

     exp1 = expression_read();
     op = operator_read();
     exp2 = expression_read();

     Expression result_exp = expression_operation (op, exp1, exp2);
     Expression simple_exp = expression_simplify(result_exp);

     cout << result_exp.num << "/" << result_exp.den << " = " 
          << simple_exp.num << "/" << simple_exp.den << endl;
}

Expression expression_read()
{
     Expression exp;
     char div;
     cin >> exp.num >> div >> exp.den;
     return exp;
}

Operator operator_read()
{
     char op;
     cin >> op;
     switch(op) {
     case '*': 
          return MULT;
     case '/':
          return DIV;
     case '+':
          return SUM;
     case '-':
          return SUB;
     }
     return NONE;
}

Expression expression_operation(Operator op, Expression exp1, Expression exp2)
{
     Expression result;
     switch(op) {
     case MULT:
          result.num = exp1.num * exp2.num;
          result.den = exp1.den * exp2.den;
          break;
     case DIV:
          result.num = exp1.num * exp2.den;
          result.den = exp2.num * exp1.den;
          break;
     case SUM:
          result.num = (exp1.num * exp2.den + exp2.num * exp1.den);
          result.den = exp1.den * exp2.den;
          break;
     case SUB:
          result.num = (exp1.num * exp2.den - exp2.num * exp1.den);
          result.den = exp1.den * exp2.den;
          break;
     case NONE:
          break;
     }

     return result;
}

int MDC(int a, int b)
{
     if (b == 0)
          return a;
     else
          return MDC(b, a % b);
}

Expression expression_simplify(Expression exp)
{
     Expression simple_exp;
     int mdc = MDC(exp.num, exp.den);

     simple_exp.num = exp.num / mdc;
     simple_exp.den = exp.den / mdc;

     if (simple_exp.num < 0 && simple_exp.den < 0) {
          simple_exp.num *= -1;
          simple_exp.den *= -1;
     } else if (simple_exp.den < 0) {
          simple_exp.num *= -1;
          simple_exp.den *= -1;
     }

     return simple_exp;
}