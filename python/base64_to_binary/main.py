import base64
import sys

print(sys.argv[0])
decoded = base64.decodebytes(sys.argv[0])

print(decoded)
print(len(decoded)*8)