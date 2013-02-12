/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString;

@interface PLKeyword : NSObject <PLConnectionObjectInteraction> {
    unsigned int _changeFlags;
    int _primaryKey;
    NSString *_title;
}

+ (Class)classFromStepData:(struct sqlite3_stmt { }*)arg1;
+ (int)createTablesForConnection:(id)arg1;
+ (id)keywordWithDefaultValues;

- (void)dealloc;
- (id)description;
- (id)initWithStepData:(struct sqlite3_stmt { }*)arg1;
- (int)primaryKey;
- (int)saveToConnection:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end