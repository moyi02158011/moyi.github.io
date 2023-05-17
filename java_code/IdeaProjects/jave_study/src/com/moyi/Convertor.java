package com.moyi;


import javax.swing.*;

public class Convertor {
    public class BinaryOperations {
        public static String binaryToDecimal(String bin) throws Exception {
            return Integer.toString(Integer.parseInt(bin, 2));
        }
        public static String binaryToHex(String bin) throws Exception {
            return Integer.toHexString(Integer.parseInt(bin, 2)).toUpperCase();
        }
        public static String binaryToOctal(String bin) throws Exception {
            return Integer.toOctalString(Integer.parseInt(bin, 2));
        }
    }

    public class DecimalOperations {
        public static String decimalToBinary(String dec) throws Exception {
            return Integer.toBinaryString(Integer.parseInt(dec));
        }

        public static String decimalToHex(String dec) throws Exception {
            return Integer.toHexString(Integer.parseInt(dec)).toUpperCase();
        }

        public static String decimalToOctal(String dec) throws Exception {
            return Integer.toOctalString(Integer.parseInt(dec));
        }
    }

    public class BinaryOperations {
        public static String binaryToDecimal(String bin) throws Exception {
            return Integer.toString(Integer.parseInt(bin, 2));
        }
        public static String binaryToHex(String bin) throws Exception {
            return Integer.toHexString(Integer.parseInt(bin, 2)).toUpperCase();
        }
        public static String binaryToOctal(String bin) throws Exception {
            return Integer.toOctalString(Integer.parseInt(bin, 2));
        }
    }
}


