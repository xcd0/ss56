all:
	make clean
	make build
build:
	make -C ../.. ss56:default
show:
	make -C ../.. ss56:default:show_all_features
lint:
	qmk lint -kb ss56
clean:
	make -C ../.. clean

push:
	git add -A .
	git commit -m tmp
	git push
