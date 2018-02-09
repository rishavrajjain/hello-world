import datetime
import pytz
import numpy
utc=pytz.utc
ist=pytz.timezone('Asia/Kolkata')
now=datetime.datetime.now(tz=utc)
ist_now=now.astimezone(ist)
print(ist_now)
