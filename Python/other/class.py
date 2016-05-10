class bird(object):
    feather = True


class chicken(bird):
    fly = False

    def _init_(self, age):
        self.age = age

summer = chicken(2)

print(bird._dict_)
print(chicken._dict_)
print(summer._dict_)
