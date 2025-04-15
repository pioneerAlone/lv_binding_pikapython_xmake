# import PikaDebug
# import fn_add

# import test3
# import test2

# print("here in main.py")
# # print('main.py: import protect')
# # import protect
# print('main.py: import start_from_lib')
# #import start_from_lib


# print('main.py: add:', fn_add.add(1,3))

# # print('main.py: import test_mfiles')
# # import test_mfiles
# # print('main.py: import fn_add')
# # import fn_add
# # print('main.py: add:', fn_add.add(1,3))



# pkdb = PikaDebug.Debuger()

# i = 0
# while i < 10:
#     i = i + 1
#     print('i :' + str(i))
#     # set a breakpoint here
#     pkdb.set_trace()

import pika_lvgl as lv
import PikaStdLib
mem = PikaStdLib.MemChecker()


def event_cb_1(evt):
    print('in evt1')
    print('mem used now: %0.2f kB' % (mem.getNow()))


def event_cb_2(evt):
    print('in evt2')
    print('mem used now: %0.2f kB' % (mem.getNow()))


btn1 = lv.btn(lv.scr_act())
btn1.align(lv.ALIGN.TOP_MID, 0, 10)
btn2 = lv.btn(lv.scr_act())
btn2.align(lv.ALIGN.TOP_MID, 0, 50)
btn1.add_event_cb(event_cb_1, lv.EVENT.CLICKED, 0)
btn2.add_event_cb(event_cb_2, lv.EVENT.CLICKED, 0)

print('mem used max: %0.2f kB' % (mem.getMax()))
print('mem used now: %0.2f kB' % (mem.getNow()))