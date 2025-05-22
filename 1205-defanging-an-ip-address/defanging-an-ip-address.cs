public class Solution {
    public string DefangIPaddr(string address)
    {
        StringBuilder res = new StringBuilder("");

        foreach (char ch in address)
        {
            if (ch == '.')
            {
                res.Append("[.]");
            }
            else
            {
                res.Append(ch);
            }
        }

        return res.ToString();
    }
}