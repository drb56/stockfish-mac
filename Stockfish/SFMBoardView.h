//
//  SFMBoardView.h
//  Stockfish
//
//  Created by Daylen Yang on 1/10/14.
//  Copyright (c) 2014 Daylen Yang. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "SFMBoardViewDelegate.h"

#include "../Chess/position.h"

using namespace Chess;

@interface SFMBoardView : NSView

@property (nonatomic) BOOL boardIsFlipped;
@property (nonatomic) Position *position;
@property (nonatomic) id <SFMBoardViewDelegate> delegate;

- (void)updatePieceViews; // If you change the position, you must call this

@end
