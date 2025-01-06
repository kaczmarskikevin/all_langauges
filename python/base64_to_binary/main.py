import base64
import sys

print(sys.argv[1])
decoded = base64.decodebytes(sys.argv[1])

print(decoded)
print(len(decoded)*8)