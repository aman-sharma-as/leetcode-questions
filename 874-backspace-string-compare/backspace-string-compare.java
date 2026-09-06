class Solution {
    public boolean backspaceCompare(String s, String t) {
        char[] sCopy = new char[s.length()];
        char[] tCopy = new char[t.length()];

        int sPtr = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '#') {
                if (sPtr > 0) {
                    sPtr--;
                }
            } else {
                sCopy[sPtr] = s.charAt(i);
                sPtr++;
            }
        }

        int tPtr = 0;

        for (int i = 0; i < t.length(); i++) {
            if (t.charAt(i) == '#') {
                if (tPtr > 0) {
                    tPtr--;
                }
            } else {
                tCopy[tPtr] = t.charAt(i);
                tPtr++;
            }
        }

        if (sPtr != tPtr) {
            return false;
        }

        for (int i = 0; i < sPtr; i++) {
            if (sCopy[i] != tCopy[i]) {
                return false;
            }
        }

        return true;
    }

}