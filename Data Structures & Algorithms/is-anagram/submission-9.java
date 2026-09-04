class Solution {
    public boolean isAnagram(String s, String t) {
        Map<Character, Integer> sd = new HashMap<>();
        Map<Character, Integer> td = new HashMap<>();
        for (char i : s.toCharArray()){
            if (sd.containsKey(i)){
                sd.put(i, sd.get(i) + 1);
            }
            else {
                sd.put(i, 1);
            }
        }
        for (char i : t.toCharArray()){
            if (td.containsKey(i)){
                td.put(i, td.get(i) + 1);
            }
            else {
                td.put(i, 1);
            }
        }
        return sd.equals(td);
    }
}
