class Solution(object):
    def longestCommonPrefix(self, strs):
        is_exist = 1
        return_str = ""
        if len(strs) == 0:
            return return_str
        if len(strs[0]) == 0:
            return return_str

        for i in range(0, len(strs[0])):
            common_piece = strs[0][0:i + 1]
            for single_str in strs:
                if single_str.find(common_piece) != 0:
                    is_exist = 0
                    break
            
            if is_exist == 0:
                return return_str
            else:
                return_str = common_piece
        
        return return_str
        
        
        
        """
        :type strs: List[str]
        :rtype: str
        """