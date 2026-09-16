Dist of [dae-config-antlr4](https://github.com/daeuniverse/dae-config-antlr4)

## Regenerating the Go parser

The Go parser uses ANTLR **4.13.1** and the matching
`github.com/antlr4-go/antlr/v4` runtime. Download
[`antlr-4.13.1-complete.jar`](https://www.antlr.org/download/antlr-4.13.1-complete.jar)
and run from this directory:

```sh
java -jar /path/to/antlr-4.13.1-complete.jar -Dlanguage=Go -package dae_config -o go/dae_config dae_config.g4
gofmt -w go/dae_config/dae_config*.go
cd go/dae_config
GOWORK=off go test ./...
```

The JAR's SHA-256 is
`bc13a9c57a8dd7d5196888211e5ede657cb64a3ce968608697e4f668251a8487`.
Commit the generated Go sources and token/interpreter metadata together with
grammar changes. The C++ distribution has its own generator/runtime version.
