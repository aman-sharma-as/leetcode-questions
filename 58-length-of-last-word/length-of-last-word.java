class Solution {
    public int lengthOfLastWord(String s) {
        int ptr = s.length()-1;
        while(ptr >= 0 && s.charAt(ptr) == ' '){
            if(s.charAt(ptr) != ' ')
                break;
            ptr--;
        }

        int count = 0;
        while(ptr >= 0 && s.charAt(ptr) != ' '){
            count++;
            ptr--;
        }

        return count;
    }
}