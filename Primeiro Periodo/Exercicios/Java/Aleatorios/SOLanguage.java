package Exercises;

import java.util.*;

public class SOLanguage {
    public static void main(String[] args) {
        Locale loc = Locale.getDefault();
        System.out.println(loc.getDisplayLanguage());
        System.out.print(loc.getLanguage());
    }
}
