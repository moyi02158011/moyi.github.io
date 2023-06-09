package Caluculator;

import java.util.HashMap;
import java.util.Map;
import java.util.Stack;
import java.text.DecimalFormat;
public class Compute {
    public String compute (String s){ // 计算
        //map来添加运算符号进去，定义优先级
        Map<Character,Integer> map = new HashMap<>();
        map.put('+',1);
        map.put('-',1);
        map.put('*',2);
        map.put('/',2);

        Stack<Character> op = new Stack<>();//字符栈
        Stack<Double> num = new Stack<>();//数字栈

        for(int i = 0 ; i < s.length(); i ++ ){
            char c = s.charAt(i);

            //判断c字符是不是数字
            if(Character.isDigit(c)){

                double x = 0;
                int j = i;
                //数字可能会是多位数
                while(j < s.length() && Character.isDigit(s.charAt(j))){
                    x = x * 10 + (double)(s.charAt(j) - '0') + 0.0;
                    j++;
                }

                if(j < s.length() && s.charAt(j) == '.'){ //是否是小数
                    j ++;
                    double y = 0.1;
                    while(j < s.length() && Character.isDigit(s.charAt(j))){
                        x = x + (s.charAt(j) - '0') * y;
                        y /= 10;
                        j ++;
                    }
                }


                num.push(x);//将数字x存入数字栈栈顶
                i = j - 1;//重新赋值i

            }else if(c == '('){
                op.push(c);   // 将左括号存入字符栈栈顶
            }else if(c == ')'){

                //如果栈顶不等于左括号，一直计算下去；
                while(op.peek() != '('){
                    eval(op,num);
                }
                op.pop(); // 将左括号弹出栈顶
            }else { //是字符
                while(!op.empty() && op.peek() != '(' && map.get(op.peek()) >= map.get(c)){
                    eval(op,num);
                }
                op.push(c);
            }
        }

        while(!op.empty()) eval(op,num);
        System.out.println(num.peek());

        return doubleToString(num.peek());
    }



    public void eval(Stack<Character> op, Stack<Double> num){ //加减
        double b = num.pop();
        double a = num.pop();

        char c = op.pop();
        if(c == '+'){
            num.push(a+b);
        }else if(c == '-'){
            num.push(a-b);
        }else if(c == '*'){
            num.push(a*b);
        }else {
            num.push(a/b);
        }
    }


    public String doubleToString(double num){

        String result;
        if(Math.abs(num % 1) <= 0.000000001)
            result = formatDouble(num, 0);
        else if(Math.abs(num % 0.1) <= 0.000000001)
            result = formatDouble(num, 1);
        else if(Math.abs(num % 0.01) <= 0.000000001)
            result = formatDouble(num, 2);
        else if(Math.abs(num % 0.001) <= 0.000000001)
            result = formatDouble(num, 3);
        else if(Math.abs(num % 0.0001) <= 0.000000001)
            result = formatDouble(num, 4);
        else if(Math.abs(num % 0.00001) <= 0.000000001)
            result = formatDouble(num, 5);
        else if(Math.abs(num % 0.000001) <= 0.000000001)
            result = formatDouble(num, 6);
        else
            result = "" +  num;

        return result;
    }


    //java中的DecimalFormat类，使用该类可以格式化数字
    public String formatDouble(double num, int digits) {
        DecimalFormat decimalFormat = new DecimalFormat();
        decimalFormat.setMaximumFractionDigits(digits); // 最大位数
        decimalFormat.setMinimumFractionDigits(digits); // 最小位数
        decimalFormat.setGroupingUsed(false); //不添加，分隔符
        return decimalFormat.format(num);
    }



    public boolean check(String s){
        int res = 0;
        int point = 0;
        if(s.charAt(0) < '0' && s.charAt(0) > '9' && s.charAt(0) != '(' ) return  false; //只能是数字开头和左括号
        for(int i = 0 ; i < s.length() - 1; i ++){
            //记录小数点
            if(s.charAt(i) == '.') point++;
            if(  s.charAt(i) == '*' || s.charAt(i) == '+' || s.charAt(i) == '-' ||  s.charAt(i) == '/' ) point = 0;
            if(point == 2) return false;

            //检查括号
            if(s.charAt(i) == '(') res ++;
            if(s.charAt(i) == ')') res --;
            if(res < 0) return false;
            //非数字加点
            if((s.charAt(i) < '0' || s.charAt(0) > '9') && s.charAt(i + 1) == '.') return false;
            //输入非数字和运算符
            if( !(s.charAt(i) >= '0' && s.charAt(i) <= '9') && s.charAt(i) != '*' && s.charAt(i) != '+' && s.charAt(i) != '-'
                    && s.charAt(i) != '/' && s.charAt(i) != '.' && s.charAt(i) != '(' && s.charAt(i) != ')') return false;
            //除以0
            if(s.charAt(i) == '/' && s.charAt(i + 1) == '0' ) return false;
            //数字加左括号
            if (s.charAt(i) >= '0' && s.charAt(i) <= '9' && s.charAt(i + 1) == '(') return false;
            //右括号加数字
            if (s.charAt(i) == ')' && s.charAt(i + 1) >= '0' && s.charAt(i + 1) <= '9' ) return false;
            //符号加右括号
            if ((s.charAt(i) == '+' || s.charAt(i) == '-' || s.charAt(i) == '*' || s.charAt(i) == '/' ) && s.charAt(i + 1) == ')')
                return false;
            //左括号加符号
            if ((s.charAt(i + 1) == '+' || s.charAt(i + 1) == '-' || s.charAt(i + 1) == '*' || s.charAt(i + 1) == '/' ) && s.charAt(i) == '(')
                return false;
        }

        return res != 0? false : true;
    }
}
