class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        str_stack = []
        for bracket in s:
            if bracket == "(" or bracket == "[" or bracket == "{":
                str_stack.append(bracket)
            elif len(str_stack) == 0:
                return False
            else:
                character = str_stack.pop()
                if (bracket == ")" and character == "("):
                    continue
                elif (bracket == "]" and character == "["):
                    continue
                elif (bracket == "}" and character == "{"):
                    continue
                else:
                    return False
        
        if len(str_stack) != 0:
            return False
        return True