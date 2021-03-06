//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PINView.h>

#import <Preferences/UITableViewDataSource-Protocol.h>

@class AlphanumericPINTableViewCell, NSString, UITableView, UITextField;

@interface AlphanumericPINView : PINView <UITableViewDataSource>
{
    UITextField *_passcodeField;
    AlphanumericPINTableViewCell *_cell;
    UITableView *_table;
}

- (void)okButtonPressed:(id)arg1;
- (void)hidePasscodeField:(BOOL)arg1;
- (void)showError:(id)arg1 animate:(BOOL)arg2;
- (void)setTextFieldKeyboardAppearance:(int)arg1;
- (void)setTextFieldKeyboardType:(int)arg1;
- (void)setBlocked:(BOOL)arg1;
- (void)deleteLastCharacter;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isFirstResponder;
- (void)appendString:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

