class Solution {
    public boolean backspaceCompare(String s, String t) {
        int i = s.length() - 1;
        int j = t.length() - 1;

        while (true) {
            i = nextValidIndex(s, i);
            j = nextValidIndex(t, j);

            if (i < 0 && j < 0) {
                return true;
            }

            if (i < 0 || j < 0) {
                return false;
            }

            if (s.charAt(i) != t.charAt(j)) {
                return false;
            }

            i--;
            j--;
        }
    }

    private int nextValidIndex(String str, int index) {
        int skip = 0;

        while (index >= 0) {
            if (str.charAt(index) == '#') {
                skip++;
            } else if (skip > 0) {
                skip--;
            } else {
                break;
            }

            index--;
        }

        return index;
    }
}