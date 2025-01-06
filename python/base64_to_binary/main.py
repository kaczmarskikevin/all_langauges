import base64
import sys

b64 = base64.b64decode(sys.argv[1])

print(b64)
print(len(b64)*8)

with open('/tmp/output.bin', 'wb') as file:
    file.write(b64)