
// CTest6-3View.cpp : CCTest63View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest6-3.h"
#endif

#include "CTest6-3Doc.h"
#include "CTest6-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest63View

IMPLEMENT_DYNCREATE(CCTest63View, CView)

BEGIN_MESSAGE_MAP(CCTest63View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest63View ����/����

CCTest63View::CCTest63View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest63View::~CCTest63View()
{
}

BOOL CCTest63View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest63View ����

void CCTest63View::OnDraw(CDC* pDC)
{
	CCTest63Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(100, 100, 600, 600);
}


// CCTest63View ���

#ifdef _DEBUG
void CCTest63View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest63View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest63Doc* CCTest63View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest63Doc)));
	return (CCTest63Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest63View ��Ϣ�������


void CCTest63View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnChar(nChar, nRepCnt, nFlags);
	CClientDC dc(this);
	CRect Rect(200, 200, 500, 500);

	str.Format(_T("%c"), nChar);

	if (x >= 200 && y >= 200) {       //��Ϊx >= 100 && y >= 100,���ַ���������˳���ڳ������ڴ��ҵ�����ʾ
		pos = (x - 200) / 10 + (y - 200) / 20 * 30;

		s.Insert(pos, nChar);
	}
	else {
		s.Append(str);
	}
	dc.DrawText(s, Rect, DT_LEFT | DT_WORDBREAK | DT_EDITCONTROL);

}


void CCTest63View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	x = point.x;
	y = point.y;
}
