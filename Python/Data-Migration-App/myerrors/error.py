
#User defind Exception

class InvalidRollNumberError(Exception):
    def __init__(self,msg):
        self.msg=msg

class InvalidNameError(Exception):
    def __init__(self,msg):
        self.msg=msg

class InvalidPercentageError(Exception):
    def __init__(self,msg):
        self.msg=msg