class Solution {
    public String reverseVowels(String s) {
        StringBuilder sb = new StringBuilder(s);
        int left = 0, right = sb.length()-1;
        while(left < right){
            char leftChar = sb.charAt(left);
            char rightChar = sb.charAt(right);
            char temp;
            if((leftChar!='a')&&(leftChar!='e')&&(leftChar!='i')&&(leftChar!='o')&&(leftChar!='u')&&(leftChar!='A')&&(leftChar!='E')&&(leftChar!='I')&&(leftChar!='O')&&(leftChar!='U')){
                left++;
            }
            else if((rightChar!='a')&&(rightChar!='e')&&(rightChar!='i')&&(rightChar!='o')&&(rightChar!='u')&&(rightChar!='A')&&(rightChar!='E')&&(rightChar!='I')&&(rightChar!='O')&&(rightChar!='U')){
                right--;
            }
            else{
                temp = sb.charAt(left);
                sb.setCharAt(left, sb.charAt(right));
                sb.setCharAt(right, temp);
                left++;
                right--;
            }
        }
        String result = new String(sb);
        return result;
    }
}