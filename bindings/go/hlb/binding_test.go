package hlb_test

import (
	"testing"

	sitter "github.com/smacker/go-tree-sitter"
	"github.com/openllb/tree-sitter-hlb/bindings/go/hlb"
	"github.com/stretchr/testify/assert"
)

func TestGrammar(t *testing.T) {
	assert := assert.New(t)

	n := sitter.Parse([]byte("fn default() fs { scratch }"), hlb.GetLanguage())
	assert.Equal(
		"(source_file (function_declaration name: (identifier) parameters: (parameter_list) result: (type_identifier) body: (block (identifier))))",
		n.String(),
	)
}
