/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMGrowTextViewDelegate.h"
#import "MMUIView.h"

@class UIImageView, MMGrowTextView, NSString, UIButton;
@protocol WCShareCardCommentInputToolViewDelegate;

@interface WCShareCardCommentInputToolView : MMUIView <MMGrowTextViewDelegate> {
	int _keyboardHeight;
	UIImageView* _toolView;
	MMGrowTextView* _textView;
	int _positionMode;
	UIButton* _sendButton;
	CGPoint fPreToolViewOrigin;
	float _fKeyboardAnimationDuration;
	int _iKeyboardAnimationCurve;
	BOOL _bPositioning;
	id<WCShareCardCommentInputToolViewDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL bPositioning;
@property(assign, nonatomic) __weak NSString* text;
@property(assign, nonatomic) __weak id<WCShareCardCommentInputToolViewDelegate> delegate;
-(void).cxx_destruct;
-(void)onTextViewDidChange:(id)onTextView;
-(void)onTextView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(BOOL)isFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)keyboardDidShow:(float)keyboard;
-(BOOL)TextViewDidDelete;
-(void)setKeyboardAnimationCurve:(int)curve;
-(void)setKeyboardAnimationDuration:(float)duration;
-(BOOL)MMGrowTextView:(id)view shouldPasteImage:(id)image;
-(void)keyboardWillHide:(BOOL)keyboard;
-(void)keyboardWillHideInter:(float)keyboard;
-(void)keyboardWillShow:(float)keyboard;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)UpdateTabBarSendButtonState;
-(void)TextDidChanged:(id)text selectedRange:(NSRange)range;
-(void)TextViewDidEnter:(id)textView;
-(void)TextViewHeightDidChanged:(id)textViewHeight;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)NotifyViewControllerPostionChanged:(BOOL)changed Animated:(BOOL)animated;
-(void)dealloc;
-(float)getToolViewHeight;
-(id)getText;
-(void)insertString:(id)string;
-(void)initSubView;
-(id)initWithFrame:(CGRect)frame;
@end

