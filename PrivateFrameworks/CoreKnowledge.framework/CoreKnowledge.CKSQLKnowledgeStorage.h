/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CoreKnowledge.CKSQLKnowledgeStorage : CKAbstractKnowledgeStorage {
    void keys.storage;
    void kv;
    void values.storage;
}

@property (nonatomic, readonly) BOOL closed;
@property (nonatomic, copy) NSArray *keys;
@property (nonatomic, retain) _TtC13CoreKnowledge15CKSQLConnection *kv;
@property (nonatomic, readonly) _TtC13CoreKnowledge15CKSQLConnection *sql;
@property (nonatomic, copy) NSArray *values;

+ (id)mainInstance;

- (id /* block */).cxx_destruct;
- (BOOL)closed;
- (id)init;
- (id)initWithPath:(id)arg1 name:(id)arg2;
- (id)keys;
- (id)kv;
- (void)objectForKeyedSubscript:;
- (BOOL)removeObjectForKey:(id)arg1 error:(id*)arg2;
- (BOOL)removeObjectsMatching:(id)arg1 error:(id*)arg2;
- (void)setKeys:(id)arg1;
- (void)setKv:(id)arg1;
- (void)setValues:(id)arg1;
- (/* Warning: Unrecognized filer type: ' ' using 'void*' */ void*)sql:(void *)arg1; // needs 1 arg types, found 107: long long, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, long double, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: 'X' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'X' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: '?' using 'void*' */ void*, long long, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, long double, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'Y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '`' using 'void*' */ void*, unsigned long long, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, SEL, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: '?' using 'void*' */ void*, long long, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, long double, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: 'X' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: '&' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: '?' using 'void*' */ void*, long long, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, long double, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'z' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'Y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '`' using 'void*' */ void*, unsigned long long, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*
- (id)tripleComponentsMatching:(id)arg1 error:(id*)arg2;
- (id)values;
- (BOOL)wipeAndReturnError:(id*)arg1;
- (id)writeBatch;

@end
