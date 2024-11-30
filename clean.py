import glob
import os

files = glob.glob("**/*", recursive=True)
excluded = (".cpp", ".inp", ".py", ".png", ".pdf", ".jpg", ".jpeg", ".png", ".txt")
files = [f for f in files if os.path.isfile(f) and not f.lower().endswith(excluded)]

print(f"the following files will be deleted: {files}")

while True:
    try:
        inp = input("confirm? (y/n) ")
        if inp == "y":
            break
        else:
            exit()
    except KeyboardInterrupt:
        exit()

for f in files:
    try:
        os.remove(f)
        print(f"deleted {f}")
    except Exception as e:
        print(f"failed to delete {f}: {e}")