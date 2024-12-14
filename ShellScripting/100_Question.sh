dir="."

if [ -d "./copiedDir/" ]; then
    echo ""
else
    mkdir copiedDir
fi

> copiedFiles.txt

for f in "$dir"/*; do
    if [ -f "${f}" ]; then
        cp $f "copiedDir/"
        echo "$f" >> copiedFiles.txt
    fi
done